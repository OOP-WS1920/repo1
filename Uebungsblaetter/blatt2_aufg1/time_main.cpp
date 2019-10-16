/*
 * time_main.cpp
 *
 *  Created on: 10.10.2019
 *      Author: student
 */

#include "Time.h"

int main()
{
	Time t3;
	Time t = {10, 10, 10};
	Time t2 = {11, 51, 10};
	t.add(t2);
	t.printTime();
}


