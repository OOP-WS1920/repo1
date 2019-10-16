/*
 * Time.cpp
 *
 *  Created on: 10.10.2019
 *      Author: student
 */

#include "Time.h"


Time::Time()
{
	_hour = 0;
	_minute = 0;
	_second = 0;
}

Time::Time(int hour, int minute, int second)
{
	_hour = hour;
	_minute = minute;
	_second = second;
}



void Time::add(Time t2)
{
	_hour += t2._hour;
	_minute += t2._minute;
	_second += t2._second;
	checkTime();
}

void Time::addHours(int hours)
{
	_hour += hours;
	checkTime();
}

void Time::addMinutes(int minutes)
{
	_minute += minutes;
	checkTime();
}

void Time::addSeconds(int seconds)
{
	_second += seconds;
	checkTime();
}

int Time::justSeconds()
{
	return _hour*60*60 + _minute * 60 + _second;
}

int Time::diff(Time t2)
{
	return justSeconds() - t2.justSeconds();
}

void Time::printTime()
{
	std::cout << "The time is: " << _hour << "h " << _minute << "m " << _second << "s " << std::endl;
}

void Time::checkTime()
{
	//check negative values
	if(_hour < 0)
	{
		_hour = 0;
		_minute = 0;
		_second = 0;
	}
	if(_minute < 0)
	{
		_minute = 0;
		_second = 0;
	}
	if(_second < 0)
		_second = 0;
	//check minute overflow
	if(_minute > 59)
	{
		_hour += _minute/60;
		_minute %= 60;
	}
	//check second overflow
	if(_second > 59)
	{
		_minute += _second/60;
		_second %= 60;
	}
}
