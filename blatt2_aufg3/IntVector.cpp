/*
 * IntVector.cpp
 *
 *  Created on: 23.10.2019
 *      Author: 1823718
 */

#include "IntVector.h"

IntVector::IntVector(size_t size) {
	_arraySize = size;
	_intArray = new int[_arraySize];
}

IntVector::~IntVector() {
	delete[] _intArray;
}

size_t IntVector::size() {
	return _arraySize;
}

int& IntVector::at(size_t idx) {
	if(idx < 0 || idx > _arraySize)
		throw std::runtime_error("index out of range");
	else
		return _intArray[idx];
}

void IntVector::out() {
	for(size_t i; i < _arraySize; i++)
	{
		std::cout << _intArray[i] << std::endl;
	}
}
