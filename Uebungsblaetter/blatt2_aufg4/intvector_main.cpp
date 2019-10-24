/*
 * intvector_main.cpp
 *
 *  Created on: 23.10.2019
 *      Author: 1823718
 */

#include "IntVector.h"

void testAssignOperator()
{
	IntVector test1(17);
	IntVector test2(12);
	for(size_t i = 0; i < test1.size(); i++)
	{
		test1.at(i) = i;
	}
	for(size_t i = 0; i < test2.size(); i++)
	{
		test2.at(i) = 3*i;
	}
	test1.out();
	test2.out();

	std::cout << std::endl <<  "after assigning" << std::endl << std::endl;

	test1 = test2;
	test1.out();
	test2.out();

}

int main(int argc, char* argv[])
{
	testAssignOperator();
}


