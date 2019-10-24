/*
 * intvector_main.cpp
 *
 *  Created on: 23.10.2019
 *      Author: 1823718
 */

#include "IntVector.h"

//void klappt()
//{
//	IntVector test(17);
//	for(size_t i = 0; i < 17; i++)
//	{
//		test.at(i) = i;
//	}
//	std::cout << test.size() << std::endl << std::endl;
//	test.out();
//	std::cout << std::endl;
//	for(size_t i = 0; i < 17; i+=2)
//	{
//		test.at(i) = i + 42;
//	}
//	std::cout << test.size() << std::endl << std::endl;
//	test.out();
//}
//
//void crash()
//{
//	IntVector test(17);
//	for(size_t i = 0; i < 17; i++)
//	{
//		test.at(i) = i;
//	}
//	std::cout << test.at(42) << std::endl;
//}

void testAssignOperator()
{
	IntVector test1(17);
	IntVector test2(12);
	for(size_t i = 0; i < test1.size(); i++)
	{
		test1.at(i) = i;
	}
	for(size_t i = 0; i < test2.size(); i+=2)
	{
		test2.at(i) = i + 42;
	}
	test1.out();
	test2.out();
}

int main(int argc, char* argv[])
{
//	klappt();
	testAssignOperator();
}


