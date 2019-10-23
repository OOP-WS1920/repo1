/*
 * IntVector.h
 *
 *  Created on: 23.10.2019
 *      Author: 1823718
 */

#ifndef INTVECTOR_H_
#define INTVECTOR_H_

#include "ooptool.h"

class IntVector
{
public:
	IntVector(size_t);
	~IntVector();
	size_t size();
	int& at(size_t idx);
	void out();
private:
	int* _intArray;
	size_t _arraySize;
};

#endif /* INTVECTOR_H_ */
