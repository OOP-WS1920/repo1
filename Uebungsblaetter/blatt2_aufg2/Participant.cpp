/*
 * Participant.cpp
 *
 *  Created on: 14.10.2019
 *      Author: 1823718
 */

#include "Participant.h"

int Participant::_participantCounter = 0;

Participant::Participant()
{
	_participantCounter++;
}

Participant::Participant(Time time, std::string name)
{
	_time = time;
	_name = name;
	_participantCounter++;
}

Participant::~Participant()
{
	_participantCounter--;
}

std::string Participant::getName()
{
	return _name;
}

Time Participant::getTime()
{
	return _time;
}

int Participant::getNumberOfParticipants()
{
	return _participantCounter;
}

void Participant::setTime(int seconds)
{
	_time.addSeconds(seconds);
}

//func

size_t calculateWinnerPos(std::vector<Participant> participants)
{
	size_t winnerPos = 0;
	int shortestTime = 1000;

	for(size_t i = 0; i < participants.size(); i++)
	{
		if(participants.at(i).getTime().justSeconds() < shortestTime)
		{
			winnerPos = i;
			shortestTime = participants.at(i).getTime().justSeconds();
		}
	}
	return winnerPos;
}
