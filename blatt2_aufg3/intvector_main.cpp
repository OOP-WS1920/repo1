/*
 * intvector_main.cpp
 *
 *  Created on: 23.10.2019
 *      Author: 1823718
 */

#include "IntVector.h"

void klappt()
{
	IntVector test(17);
	for(size_t i = 0; i < 17; i++)
	{
		test.at(i) = i;
	}
	std::cout << test.size() << std::endl << std::endl;
	test.out();
	std::cout << std::endl;
	for(size_t i = 0; i < 17; i+=2)
	{
		test.at(i) = i + 42;
	}
	std::cout << test.size() << std::endl << std::endl;
	test.out();
}

void crash()
{
	IntVector test(17);
	for(size_t i = 0; i < 17; i++)
	{
		test.at(i) = i;
	}
	std::cout << test.at(42) << std::endl;
}

int main(int argc, char* argv[])
{
	klappt();

}


