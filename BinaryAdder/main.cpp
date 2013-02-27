//============================================================================
// Name        : half_adder.cpp
// Author      : Joel Clark
// Version     : 0.0.1
// Copyright   : Open Source!
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
#include <vector>
#include "FullAdder.h"

const int ASCII_Y = 121;

int TwosCompliment(int value);
int AddNumbers(int inputA, int inputB, int totalBits);
int MultiplyNumbers(int inputA, int inputB, int totalBits);

int main() {
    
	char totalBits = 32;
	char subtract = 0;
	int finalValue = 0;
	int inputA, inputB;
    
    std::cout << "enter the first number (A) and second number (B)" << std::endl << "space separated" << std::endl;
    
	std::cin >> inputA >> inputB;
    
	std::cout << "do you want to subtract B from A?" << std::endl << "y/n >> ";
	std::cin >> subtract;
	std::cout << std::endl;
    
	if (subtract == ASCII_Y) {
		inputB = TwosCompliment(inputB);
	}
    
	finalValue = AddNumbers(inputA, inputB, totalBits);
    
	std::cout << inputA << " + " << inputB << " is: " << finalValue << std::endl;
    
	if (subtract == ASCII_Y) {
		inputB = TwosCompliment(inputB);
	}
    
	finalValue = MultiplyNumbers(inputA, inputB, totalBits);
	std::cout << inputA << " * " << inputB << " is: " << finalValue << std::endl;
    
	return 0;
}

/* generates a two's compliment of the number */
int TwosCompliment(int value) {
	value = (value ^ 0xFFFFFFFF) + 1;
	return value;
}

int AddNumbers(int inputA, int inputB, int totalBits) {
    
    std::vector<binaryadder::FullAdder> fullAdders;
	int finalValue = 0;
    
    for (int i = 0; i < totalBits; i++) {
        fullAdders.push_back(binaryadder::FullAdder());
    }
    
	for (int i = 0; i < totalBits; i++) {
        
		bool a = 0, b = 0;
		//set the boolean values
		if (inputA & (1 << i)) {
			a = 1;
		}
        else {
			a = 0;
		}
		if (inputB & (1 << i)) {
			b = 1;
		}
        else {
			b = 0;
		}
        
		// first full adder should have a 0 in the carry_in
		if (i < 1) {
			fullAdders[i].fullAdd(false, a, b);
		}
        else {
			fullAdders[i].fullAdd(fullAdders[i-1].getCarry(), a, b);
		}
        
		// if current full adder sum is set, shift a 1 into that position
		if (fullAdders[i].getSum()) {
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
