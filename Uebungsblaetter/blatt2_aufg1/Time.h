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
	private:
		int hour;
		int minute;
		int second;
		void checkTime();
	public:
//		Time(int hour = 0, int minute = 0, int second = 0): hour(hour), second(second), minute(minute){};
		Time();
		Time(int hour, int minute, int second);
		void add(Time t2);
		void addHours(int hours);
		void addMinutes(int minutes);
		void addSeconds(int seconds);
		int justSeconds();
		int diff(Time t2);
		void printTime();

};



#endif /* TIME_H_ */
