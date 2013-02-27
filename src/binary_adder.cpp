//============================================================================
// Name        : half_adder.cpp
// Author      : Joel Clark
// Version     : 0.0.1
// Copyright   : Open Source!
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
using namespace std;

int TwosCompliment(int value);
int AddNumbers(int inputA, int inputB, int totalBits);
int MultiplyNumbers(int inputA, int inputB, int totalBits);

/*
 * this class allows creation of full adders, requires the half adder class
 * for creation of the two half adders
 */
class FullAdder {

public:
	bool sum, carry_out; /* the outputs from the full adder */

	void full_add(bool carry_in, bool a, bool b) {
		// create two half adder objects
		HalfAdder half_adder[2];

		// initial logic stage
		half_adder[0].half_add(a, b);
		half_adder[1].half_add(half_adder[0].sum, carry_in);

		// output logic stage
		sum = half_adder[1].sum;
		carry_out = half_adder[0].carry | half_adder[1].carry;

	}

};

int main() {

	char totalBits = 32;
	char subtract = 0;
	int finalValue = 0;
	int inputA, inputB;

	cout << "enter the first number (A) and second number (B)" << endl << "space separated" << endl;

	cin >> inputA >> inputB;

	cout << "do you want to subtract B from A?" << endl << "y/n >> ";
	cin >> subtract;
	cout << endl;

	if (subtract == 121) {
		inputB = TwosCompliment(inputB);
	}

	finalValue = AddNumbers(inputA, inputB, totalBits);

	cout << inputA << " + " << inputB << " is: " << finalValue << endl;

	if (subtract == 121) {
		inputB = TwosCompliment(inputB);
	}

	finalValue = MultiplyNumbers(inputA, inputB, totalBits);
	cout << inputA << " * " << inputB << " is: " << finalValue << endl;

	return 0;
}

/* generates a two's compliment of the number */
int TwosCompliment(int value) {

	value = (value ^ 0xFFFFFFFF) + 1;
	return value;

}

int AddNumbers(int inputA, int inputB, int totalBits) {

	FullAdder fullAdder[totalBits];
	int finalValue = 0;

	for (int i = 0; i < totalBits; i++) {

		bool a = 0, b = 0;
		//set the boolean values
		if (inputA & (1 << i)) {
			a = 1;
		} else {
			a = 0;
		}
		if (inputB & (1 << i)) {
			b = 1;
		} else {
			b = 0;
		}

		// first full adder should have a 0 in the carry_in
		if (i < 1) {
			fullAdder[i].full_add(0, a, b);
		} else {
			fullAdder[i].full_add(fullAdder[i-1].carry_out, a, b);
		}

		// if current full adder sum is set, shift a 1 into that position
		if (fullAdder[i].sum) {
			finalValue |= (1 << i);
		}
	}

	return finalValue;
}

int MultiplyNumbers(int inputA, int inputB, int totalBits) {

	int finalValue = 0;
	//loops through the required number of times
	for (int i = 0; i < inputB; i++) {
		finalValue = AddNumbers(inputA, finalValue, totalBits);
	}
	return finalValue;

}
