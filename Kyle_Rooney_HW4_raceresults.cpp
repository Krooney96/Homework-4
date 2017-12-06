//Kyle Rooney
//Race Results Homework 4
//This program will display who won the race by determining who has the lowest time, or if there was a tie.
//I cannot figure out how to properly display a tie without breaking everything so lets hope they don't.
#include <iostream>
#include <string>
using namespace std;
//Function Prototypes
void getRaceTimes(string &, double &);
void findWinner(string, string, string, double, double, double);
void welcome();
double raceAverage(double, double, double);




int main()
{
	string racerName1, racerName2, racerName3;
	double raceTime1, raceTime2, raceTime3;
	double raceAverage;
	
	// Welcome
	cout << "***************************************" << endl;
	cout << "Welcome to the Race Results Program!" << endl;
	cout << "Please enter the racers names and race times." << endl;
	cout << "Please enter a real number for the race time. <The race time must be > 0>." << endl;
	cout << "Program developed by *Kyle Rooney*" << endl;
	cout << "***************************************" << endl;
	
	// Name and time collection
	cout << "\n Please enter the first racers name: ";
	cin >> racerName1;
	cout << "\n Please enter the first racers time: ";
	cin >> raceTime1;
	cout << "\n Please enter the second racers name: ";
	cin >> racerName2;
	cout << "\n Please enter the second racers time: ";
	cin >> raceTime2;
	cout << "\n Please enter the third racers name: ";
	cin >> racerName3;
	cout << "\n Please enter the third racers time: ";
	cin >> raceTime3;

	{ // Did racer 1 come in first?
		if (raceTime1 < raceTime2 && raceTime1 < raceTime3)
		{
			if (raceTime2 < raceTime3)
			{
				cout << racerName1 << " came in first with a time of " << raceTime1 << endl;
				cout << racerName2 << " came in second with a time of " << raceTime2 << endl;
				cout << racerName3 << " came in third with a time of " << raceTime3 << endl;
				cout << "Congratulations " << racerName1 << ", you are the winner!" << endl;
				cout << "The average time of the races was " << (raceTime1 + raceTime2 + raceTime3) / 3 << endl;
			}
			else
			{
				cout << racerName1 << " came in first with a time of " << raceTime1 << endl;
				cout << racerName3 << " came in second with a time of " << raceTime3 << endl;
				cout << racerName2 << " came in third with a time of " << raceTime2 << endl;
				cout << "Congratulations " << racerName1 << ", you are the winner!" << endl;
				cout << "The average time of the races was " << (raceTime1 + raceTime2 + raceTime3) / 3 << endl;
			}
		}
	}
	{ // Did racer 2 come in first?
		if (raceTime2 < raceTime1 && raceTime2 < raceTime3)
		{
			if (raceTime1 < raceTime3)
			{
				cout << racerName2 << " came in first with a time of " << raceTime2 << endl;
				cout << racerName1 << " came in second with a time of " << raceTime1 << endl;
				cout << racerName3 << " came in third with a time of " << raceTime3 << endl;
				cout << "Congratulations " << racerName2 << ", you are the winner!" << endl;
				cout << "The average time of the races was " << (raceTime1 + raceTime2 + raceTime3) / 3 << endl;
			}
			else
			{
				cout << racerName2 << " came in first with a time of " << raceTime2 << endl;
				cout << racerName3 << " came in second with a time of " << raceTime3 << endl;
				cout << racerName1 << " came in third with a time of " << raceTime1 << endl;
				cout << "Congratulations " << racerName2 << ", you are the winner!" << endl;
				cout << "The average time of the races was " << (raceTime1 + raceTime2 + raceTime3) / 3 << endl;
			}
		}
	}

	{ // Did racer 3 come in first?
		if (raceTime3 < raceTime1 && raceTime3 < raceTime2)
		{
			if (raceTime2 < raceTime1)
			{
				cout << racerName3 << " came in first with a time of " << raceTime3 << endl;
				cout << racerName2 << " came in second with a time of " << raceTime2 << endl;
				cout << racerName1 << " came in third with a time of " << raceTime1 << endl;
				cout << "Congratulations " << racerName3 << ", you are the winner!" << endl;
				cout << "The average time of the races was " << (raceTime1 + raceTime2 + raceTime3) / 3 << endl;
			}
			else
			{
				cout << racerName3 << " came in first with a time of " << raceTime3 << endl;
				cout << racerName1 << " came in second with a time of " << raceTime1 << endl;
				cout << racerName2 << " came in third with a time of " << raceTime2 << endl;
				cout << "Congratulations " << racerName3 << ", you are the winner!" << endl;
				cout << "The average time of the races was " << (raceTime1 + raceTime2 + raceTime3) / 3 << endl;
			}
		}
	}





	system("pause");
	return 0;
}
//Function Definitions
void getRaceTimes(string &racerName, double &raceTime)
{
}

void findWinner(string racerName1, string racerName2, string racerName3, double raceTime1, double raceTime2, double raceTime3)
{
}

void welcome()
{
}

double raceAverage(double raceTime1, double raceTime2, double raceTime3)
{
	double average = (raceTime1 + raceTime2 + raceTime3) / 3;


	return average;
}