/*
 * race_main.cpp
 *
 *  Created on: 12.10.2019
 *      Author: swt
 */

#include "Participant.h"
#include "ooptool.h"

using namespace std;

int main(int argc, const char* argv[])
{
	argsp_t argsp(argc, argv);
	vector<Participant> participants;
	vector<string> names;
	vector<int> randints;
	size_t winnerPos;

	names = argsp.positionals();
	randints = create_randints(names.size(), 0, 1000);

	for(size_t i = 0; i < names.size(); i++)
	{
		participants.push_back({{0, 0, 0}, names.at(i)});
		participants.at(i).setTime(randints.at(i));
	}

	winnerPos = calculateWinnerPos(participants);

	//output
	cout
	<< "Number of participants: "
	<< participants.at(0).getNumberOfParticipants()
	<< endl;

	for(size_t i = 0; i < participants.size(); i++)
	{
		cout
		<< participants.at(i).getName()
		<< " "
		<< participants.at(i).getTime().justSeconds()
		<< endl;
	}

	cout
	<< endl
	<< "The winner is "
	<< participants.at(winnerPos).getName()
	<< " with "
	<< participants.at(winnerPos).getTime().justSeconds()
	<< " seconds"
	<< endl;
}
