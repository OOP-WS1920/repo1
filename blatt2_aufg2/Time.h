/*
 * Time.h
 *
 *  Created on: 10.10.2019
 *      Author: student
 */

#ifndef TIME_H_
#define TIME_H_

#include <iostream>

class Time
{
	public:
		Time();
		Time(int, int, int);
		void add(Time);
		void addHours(int);
		void addMinutes(int);
		void addSeconds(int);
		int justSeconds();
		int diff(Time);
		void printTime();

	private:
		int _hour;
		int _minute;
		int _second;
		void checkTime();
};

#endif /* TIME_H_ */
