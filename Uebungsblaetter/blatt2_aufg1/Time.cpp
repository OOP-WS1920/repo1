/*
 * Time.cpp
 *
 *  Created on: 10.10.2019
 *      Author: student
 */

#include "Time.h"


Time::Time()
{
	hour = 0;
	minute = 0;
	second = 0;
}

Time::Time(int hour, int minute, int second)
{
	this->hour = hour;
	this->minute = minute;
	this->second = second;
}

void Time::checkTime()
{
	//check negative values
	if(hour < 0)
	{
		hour = 0;
		minute = 0;
		second = 0;
	}
	if(minute < 0)
	{
		minute = 0;
		second = 0;
	}
	if(second < 0)
		second = 0;
	//check minute overflow
	if(minute > 59)
	{
		hour += minute/60;
		minute %= 60;
	}
	//check second overflow
	if(second > 59)
	{
		minute += second/60;
		second %= 60;
	}
}

void Time::add(Time t2)
{
	hour += t2.hour;
	minute += t2.minute;
	second += t2.second;
	checkTime();
}

void Time::addHours(int hours)
{
	hour += hours;
	checkTime();
}

void Time::addMinutes(int minutes)
{
	minute += minutes;
	checkTime();
}

void Time::addSeconds(int seconds)
{
	second += seconds;
	checkTime();
}

int Time::justSeconds()
{
	return hour*60*60 + minute * 60 + second;
}

int Time::diff(Time t2)
{
	return justSeconds() - t2.justSeconds();
}

void Time::printTime()
{
	std::cout << "The time is: " << hour << "h " << minute << "m " << second << "s " << std::endl;
}
