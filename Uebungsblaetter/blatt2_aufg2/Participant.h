/*
 * participant.h
 *
 *  Created on: 12.10.2019
 *      Author: swt
 */

#ifndef PARTICIPANT_H_
#define PARTICIPANT_H_

#include "Time.h"
#include <vector>

class Participant
{
	public:
		Participant();
		Participant(Time, std::string);
		~Participant();
		std::string getName();
		Time getTime();
		static int getNumberOfParticipants();
		void setTime(int);

	private:
		Time _time;
		std::string _name;
		static int _participantCounter;
};

//func

size_t calculateWinnerPos(std::vector<Participant>);

#endif /* PARTICIPANT_H_ */
