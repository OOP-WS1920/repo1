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
	for(size_t i; i < 17; i++)
	{
		test.at(i) = i;
	}
	test.size();
	test.out();
}

int main()
{
	klappt();

	std::cout << "test" << std::endl;

}


