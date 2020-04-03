
// This program reads in the names of the 29 Major League baseball teams that have won
// the World Series at least once from the teams.dat file. It creates
// an array of Team objects for these teams. 
// It also reads in a list of the teams that won the World Series each year from 1950-2014
// from the WorldSeriesWinners.dat file.  It tallies the number of wins for each team, 
// stores this information for the correct Team in the array of teams object, and
// prints out the number of wins for each team.

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include "Team.h"


// TASK:  PLACE YOUR NAME HERE

int main()
{
	string name;  //temp variable when reading in a  name from a file
	int totalWins = 0;  //temp variable for tallying the number of times a team
						//name appears in the WorldSeriesWinners.dat file.

	//TASK:  Create an array of Team objects of size 29.

	//Open the teams file
	ifstream teamInputFile;
	teamInputFile.open("teams.dat");

	//If the teams file opened, read in all the team names.
	if (teamInputFile)
	{

		//For each line in the teams.dat file, read in the name of the team.
		//Here we are assuming there are 29 lines in both the array and teams.dat file.

		//TASK: COMPLETE THE FOR LOOP AND UNCOMMENT IT OUT
		//for (int i = 0; i < ????; i++)
		{
			getline(teamInputFile, name);

			//TASK:  Set the name of the i-th team on the teams array to
			//       what we read into the name variable on the previous line.
			
		}

		teamInputFile.close(); //close the team file.
	}
	else  //if the file did not open, tell the user.
	{
		cout << "Error opening the teams File.\n\n";
	}

	//****We are now done with the teams file. 
	//****We proceed to read in from the WorldSeriesWinners.dat.


	//For each team in the teams array:
	//     open the WorldSeriesWinners.dat file,
	//     search through the file for the occcurences of the current (i-th) team,
	//     accumulate how many wins that team has (ie, how many times the team's name appears)
	//     update the team's info, 
	//     and close the file.
	// NOTE:  This means we are opening/closing the WorldSeriesWinners.dat file a total of 29 times,
	//       once for each team.

	// TASK:  COMPLETE THE FOR LOOP AND UNCOMMENT IT OUT.
	//for (int i = 0; i < ???; i++)
	{

		//TASK:  Set the totalWins to 0 at the start of each iteration.
		totalWins = 0;

		//Open the team file at the start of each iteration.
		ifstream winsInputFile;
		winsInputFile.open("WorldSeriesWinners.dat");

		//If the wins file opened, search through it to
		//accumulate the number of wins.
		if (winsInputFile)
		{
			//Keeping reading through the WorldSeriesWinners file
			//till we hit the end of file.
			while (getline(winsInputFile, name))
			{
				//TASK:  If the current team (the i-th in the array) 
				//       matches the name variable read in from the file
				//       in the previous line, then
				//       increase totalWins by 1.
			}

			teamInputFile.close(); //close the team file.

			//TASK: Set the number of wins of the current team (the i-th team)  
		}
		else  //if the file did not open, tell the user.
		{
			cout << "Error opening the WorldSeriesWinners File.\n\n";
		}

	}

	//TASK:  Create a for loop to iterate over the teams array
	//       and cout otu the name and wins of each team.

}