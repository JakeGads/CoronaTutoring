#ifndef TEAM_H
#define TEAM_H

#include <string>
using namespace std;

/*
The Team class stores the name and numWins for a team.
*/

//TASK:  YOUR NAME
class Team
{
private:

	string name; //name of team
	int numWins;  //number of times the team has won the world series

public:

	//TASK:  Create a default constructor that uses
	// CONSTRUCTOR DELEGATION to set the team's name to the 
	// empty string and the num of wins to 0.



	//TASK:  Create a non-default constructor that 
	// TAKES IN ONE PARAMETER for the name of the team.
	// IT SHOULD THEN USE CONSTRUCTOR DELEGATION 
	// to set the team's name to the parameter value 
	// and the num of wins to 0.



	//TASK: Update the constructor below to use a
	// MEMBER INITIALIZATION LIST to assign n to name
	// and numWins to wins.
	Team(string n, int wins)
	{
		name = n;
		numWins = wins;
	}

	/*Setters*/
	void setName(string n)
	{
		name = n;
	}

	void setWins(int w)
	{
		numWins = w;
	}

	/*Getters*/
	string getName()
	{
		return name;
	}

	int getWins()
	{
		return numWins;
	}
};
#endif