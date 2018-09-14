// This program is designed to demonstrate the ability of inheritance through
// the use of the 12 Days of Christmas song. 
//
// Program: 12_Days_of_Christmas
// Software Developer: Winston Wedgeworth III

//-----------------------------------------------------------------------------

#include <iostream>		// Input/Output Stream

using namespace std;	// Namespace identifier

//-----------------------------------------------------------------------------

// Function Prototypes

void User_Prompt();				// User input
void Days_of_Christmas(int);	// Days of Christmas output

void Day1();					// Days Functions
void Day2();
void Day3();
void Day4();
void Day5();
void Day6();
void Day7();
void Day8();
void Day9();
void Day10();
void Day11();
void Day12();

//-----------------------------------------------------------------------------

int main()
{
	User_Prompt();	// Call function for user input

	main();	// Recurse into main

	system("pause");	// Windows Only Pause
	return 0;			// Success
}

void User_Prompt()
{
	int day = 0;

	cout << " 12 Days of Christmas " << endl;
	cout << "----------------------" << endl << endl;

	cout << "Pick a Day (1-12): ";
	cin >> day;

	if (cin.fail()) day = 99; // Failsafe for non-numeric inputs

	Days_of_Christmas(day);	// Call function passing day by value
	
	system("pause");
	system("cls");

}

//-----------------------------------------------------------------------------

void Days_of_Christmas(int day)		// Outputs the Days of Christmas
{

	cout << "\nOn the First Day of Christmas my true love gave to me!\n" << endl;

	switch (day)
	{
	case 1:	Day1();	break;

	case 2: Day2();	break;

	case 3: Day3();	break;

	case 4: Day4();	break;

	case 5: Day5();	break;

	case 6: Day6();	break;

	case 7: Day7();	break;

	case 8: Day8();	break;

	case 9: Day9();	break;

	case 10: Day10();	break;

	case 11: Day11();	break;

	case 12: Day12(); break;

	default:	
		cout << "Wait.... That's not a Day of Christmas?!?" <<
				"\nTry Again!" << endl;
		
		system("pause");
		system("cls");
		break;
	}		
}

//-----------------------------------------------------------------------------

void Day1()	// Partridge in a Pear Tree
{
	cout << "A Partridge in a Pear Tree!" << endl << endl;
}

void Day2()	// Two Turtle Doves
{
	cout << "2 Turtle Doves" << endl;
	cout << "\nand\n\n";
	Day1();
}

void Day3()	// Three French Hens
{
	cout << "3 French Hens" << endl;
	Day2();
}

void Day4()	// Four Calling Birds
{
	cout << "4 Calling Birds" << endl;
	Day3();
}

void Day5()	// Five Golden Rings
{
	cout << "5 Golden Rings" << endl;
	Day4();
}

void Day6()	// Six Geese a Laying
{
	cout << "6 Geese a Laying" << endl;
	Day5();
}

void Day7()	// Seven Swans a Swimming
{
	cout << "7 Swans a Swimming" << endl;
	Day6();
}

void Day8()	// Eight Maids a Milking
{
	cout << "8 Maids a Milking" << endl;
	Day7();
}

void Day9()	// Nine Ladies Dancing
{
	cout << "9 Ladies Dancing" << endl;
	Day8();
}

void Day10()	// Ten Lords a Leaping
{
	cout << "10 Lords a Leaping" << endl;
	Day9();
}

void Day11()	// Eleven Pipers Piping
{
	cout << "11 Pipers Piping" << endl;
	Day10();
}

void Day12()	// Twelve Drummers Drumming
{
	cout << "12 Drummers Drumming" << endl;
	Day11();
}
