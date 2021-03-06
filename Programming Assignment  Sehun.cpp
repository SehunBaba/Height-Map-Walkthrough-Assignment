// Programming Assignment  Sehun.cpp : Defines the entry point for the console application.
//

// Programming Assignment 1 - Sehun Babatunde.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

// I call the methods out of order.
void DisplayMap();
void StartMenu();
void EditedStartMenu();
//void MountainPass();


// This function reads the Map Data into an 2D Array & performs the Mountain Pass Algorithm 
void ReadMap(ifstream& infile)
{
	char filename[30];
	const int maxsize = 9; // It will always be a 9x9 array
	int mountainPassarray[9];
	int tempArray[9][9];
	int newArray[9][9];
	int currentRowPostion;
	int userNumber;
	//int userStartingPostion = newArray[0][4];
	string userChoice;



	cout << "Please enter the name of the Map file and we'll be on our way!: " << endl;
	cin >> filename;
	infile.open(filename);

	// Bring up the new menu to display the map data, and avoid any errors.
	if (infile)
	{
		cout << endl;
		cout << "Your Map has been successfully loaded, please now go to option 2, to display it!" << endl;
		EditedStartMenu();
	}

	// If there's something wrong, it will prompt the user to try again.  
	if (!infile)
	{
		cout << "ERROR: ";
		cout << "Can't open input file\n";
		cout << "Please enter the name of the Map file: " << endl;
		cin >> filename;
		infile.open(filename);

	}

	// This saves the Mapdata into an 2D array.
	for (int z = 0; z < 9; z++) // Rows
	{

		for (int x = 0; x < 9; x++) // Columns 
		{
			infile >> tempArray[z][x];
			cout << tempArray[z][x] << "\t"; // Displays in a 9x9 Array matrix format

		}
		cout << endl;
	}

	cout << endl;
	cout << "Would you like to perform an Mountain Pass?" << endl;
	cout << "Enter Yes or No to proceed" << endl;
	cin >> userChoice;

	
	// This will quit and end the program 
	if (userChoice == "No" || userChoice == "no")
	{
		cout << "Thanks for using Map Reader!" << endl;
		return;

	}


	if (userChoice == "yes" || userChoice == "Yes") // some alternative options
	{



		for (int i = 0; i < maxsize; i++)
		{
			for (int x = 0; x < maxsize; x++)
			{
				infile >> tempArray[i][x];
				newArray[i][x] = tempArray[i][x];

			}
			cout << endl;
		}

		// Mountain Pass Alogrthim Code
		
		

		for (int y = 0; y < maxsize; y++)  //Access the Array's Rows
		{

			for (int x = 0; x < maxsize; x++) //Access the Array's Colummns
			{
				// 0th Row
				currentRowPostion = 0;
				if (newArray[0][0] < newArray[1][0])
				{
					mountainPassarray[0] = newArray[0][0];
				}

				else if (newArray[1][0] < newArray[0][0])
				{
					mountainPassarray[0] = newArray[1][0];
				}

				if (newArray[1][0] < newArray[2][0] && newArray[1][0] < mountainPassarray[0]) // I have the extra "< mountainPassArray" so if a number that is higher than the recent number in the array, it doesn't overwrite it
				{
					mountainPassarray[0] = newArray[1][0];
				}

				else if (newArray[2][0] < newArray[1][0] && newArray[2][0] < mountainPassarray[0])
				{
					mountainPassarray[0] = newArray[2][0];
				}

				if (newArray[2][0] < newArray[3][0] && newArray[2][0] < mountainPassarray[0])
				{
					mountainPassarray[0] = newArray[2][0];
				}

				else if (newArray[3][0] < newArray[2][0] && newArray[3][0] < mountainPassarray[0])
				{
					mountainPassarray[0] = newArray[3][0];
				}

				if (newArray[3][0] < newArray[4][0] && newArray[3][0] < mountainPassarray[0])
				{
					mountainPassarray[0] = newArray[3][0];
				}

				else if (newArray[4][0] < newArray[3][0] && newArray[4][0] < mountainPassarray[0])
				{
					mountainPassarray[0] = newArray[4][0];
				}

				if (newArray[4][0] < newArray[5][0] && newArray[4][0] < mountainPassarray[0])
				{
					mountainPassarray[0] = newArray[4][0];
				}

				else if (newArray[5][0] < newArray[4][0] && newArray[5][0] < mountainPassarray[0])
				{
					mountainPassarray[0] = newArray[5][0];
				}

				/////
				if (newArray[5][0] < newArray[6][0] && newArray[5][0] < mountainPassarray[0])
				{
					mountainPassarray[0] = newArray[5][0];
				}

				else if (newArray[6][0] < newArray[5][0] && newArray[6][0] < mountainPassarray[0])
				{
					mountainPassarray[0] = newArray[6][0];
				}

				// First Row
				currentRowPostion = 1;

				if (newArray[0][1] < newArray[1][1])
				{
					mountainPassarray[1] = newArray[0][1];
				}

				else if (newArray[1][1] < newArray[0][1])
				{
					mountainPassarray[1] = newArray[1][1];
				}


				if (newArray[1][1] < newArray[2][1] && newArray[1][1] < mountainPassarray[1])
				{
					mountainPassarray[1] = newArray[1][1];
				}


				else if (newArray[2][1] < newArray[1][1] && newArray[2][1] < mountainPassarray[1])
				{
					mountainPassarray[1] = newArray[2][1];
				}

				if (newArray[2][1] < newArray[3][1] && newArray[2][1] < mountainPassarray[1])
				{
					mountainPassarray[1] = newArray[2][1];
				}

				else if (newArray[3][1] < newArray[2][1] && newArray[3][1] < mountainPassarray[1])
				{
					mountainPassarray[1] = newArray[3][1];
				}

				if (newArray[3][1] < newArray[4][1] && newArray[3][1] < mountainPassarray[1])
				{
					mountainPassarray[1] = newArray[3][1];
				}


				else if (newArray[4][1] < newArray[3][1] && newArray[4][1] < mountainPassarray[1])
				{
					mountainPassarray[1] = newArray[4][1];
				}

				if (newArray[4][1] < newArray[5][1] && newArray[4][1] < mountainPassarray[1])
				{
					mountainPassarray[1] = newArray[4][1];
				}

				else if (newArray[5][1] < newArray[4][1] && newArray[5][1] < mountainPassarray[1])
				{
					mountainPassarray[1] = newArray[5][1];
				}

				if (newArray[5][1] < newArray[6][1] && newArray[5][1] < mountainPassarray[1])
				{
					mountainPassarray[1] = newArray[5][1];
				}

				else if (newArray[6][1] < newArray[5][1] && newArray[6][1] < mountainPassarray[1])
				{
					mountainPassarray[1] = newArray[6][1];
				}

				if (newArray[6][1] < newArray[7][1] && newArray[6][1] < mountainPassarray[1])
				{
					mountainPassarray[1] = newArray[6][1];
				}

				else if (newArray[7][1] < newArray[6][1] && newArray[7][1] < mountainPassarray[1])
				{
					mountainPassarray[1] = newArray[7][1];
				}

				if (newArray[7][1] < newArray[8][1] && newArray[7][1] < mountainPassarray[1])
				{
					mountainPassarray[1] = newArray[7][1];
				}

				else if (newArray[8][1] < newArray[7][1] && newArray[8][1] < mountainPassarray[1])
				{
					mountainPassarray[1] = newArray[8][1];
				}



				// Second Row
				currentRowPostion = 2;

				if (newArray[0][2] < newArray[1][2])
				{
					mountainPassarray[2] = newArray[0][2];
				}

				else if (newArray[1][2] < newArray[0][2])
				{
					mountainPassarray[2] = newArray[1][2];
				}

				if (newArray[1][2] < newArray[2][2] && newArray[1][2] < mountainPassarray[2])
				{
					mountainPassarray[2] = newArray[1][2];
				}

				else if (newArray[2][2] < newArray[1][2] && newArray[2][2] < mountainPassarray[2])
				{
					mountainPassarray[2] = newArray[2][2];
				}

				if (newArray[2][2] < newArray[3][2] && newArray[2][2] < mountainPassarray[2])
				{
					mountainPassarray[2] = newArray[2][2];
				}

				else if (newArray[3][2] < newArray[2][2] && newArray[3][2] < mountainPassarray[2])
				{
					mountainPassarray[2] = newArray[3][2];
				}

				if (newArray[3][2] < newArray[4][2] && newArray[3][2] < mountainPassarray[2])
				{
					mountainPassarray[2] = newArray[3][2];
				}

				else if (newArray[4][2] < newArray[3][2] && newArray[4][2] < mountainPassarray[2])
				{
					mountainPassarray[2] = newArray[4][2];
				}

				if (newArray[4][2] < newArray[5][2] && newArray[4][2] < mountainPassarray[2])
				{
					mountainPassarray[2] = newArray[4][2];
				}

				else if (newArray[5][2] < newArray[4][2] && newArray[5][2] < mountainPassarray[2])
				{
					mountainPassarray[2] = newArray[5][2];
				}

				if (newArray[5][2] < newArray[6][2] && newArray[5][2] < mountainPassarray[2])
				{
					mountainPassarray[2] = newArray[5][2];
				}

				else if (newArray[6][2] < newArray[5][2] && newArray[6][2] < mountainPassarray[2])
				{
					mountainPassarray[2] = newArray[6][2];
				}

				if (newArray[6][2] < newArray[7][2] && newArray[6][2] < mountainPassarray[2])
				{
					mountainPassarray[2] = newArray[6][2];
				}

				else if (newArray[7][2] < newArray[6][2] && newArray[7][2] < mountainPassarray[2])
				{
					mountainPassarray[2] = newArray[7][2];
				}

				if (newArray[7][2] < newArray[8][2] && newArray[7][2] < mountainPassarray[2])
				{
					mountainPassarray[2] = newArray[7][2];
				}

				else if (newArray[8][2] < newArray[7][2] && newArray[8][2] < mountainPassarray[2])
				{
					mountainPassarray[2] = newArray[8][2];
				}


				// Third Row
				currentRowPostion = 3;

				if (newArray[0][3] < newArray[1][3])
				{
					mountainPassarray[3] = newArray[0][3];
				}

				else if (newArray[1][3] < newArray[0][3])
				{
					mountainPassarray[3] = newArray[1][3];
				}

				if (newArray[1][3] < newArray[2][3] && newArray[1][3] < mountainPassarray[3])
				{
					mountainPassarray[3] = newArray[1][3];
				}

				else if (newArray[2][3] < newArray[1][3] && newArray[2][3] < mountainPassarray[3])
				{
					mountainPassarray[3] = newArray[2][3];
				}

				if (newArray[2][3] < newArray[3][3] && newArray[2][3] < mountainPassarray[3])
				{
					mountainPassarray[3] = newArray[2][3];
				}

				else if (newArray[3][3] < newArray[2][3] && newArray[3][3] < mountainPassarray[3])
				{
					mountainPassarray[3] = newArray[3][3];
				}

				if (newArray[3][3] < newArray[4][3] && newArray[3][3] < mountainPassarray[3])
				{
					mountainPassarray[3] = newArray[3][3];
				}

				else if (newArray[4][3] < newArray[3][3] && newArray[4][3] < mountainPassarray[3])
				{
					mountainPassarray[3] = newArray[4][3];
				}

				if (newArray[4][3] < newArray[5][3] && newArray[4][3] < mountainPassarray[3])
				{
					mountainPassarray[3] = newArray[4][3];
				}

				else if (newArray[5][3] < newArray[4][3] && newArray[5][3] < mountainPassarray[3])
				{
					mountainPassarray[3] = newArray[5][3];
				}

				if (newArray[5][3] < newArray[6][3] && newArray[6][3] < mountainPassarray[3])
				{
					mountainPassarray[3] = newArray[5][3];
				}

				else if (newArray[6][3] < newArray[5][3] && newArray[6][3] < mountainPassarray[3])
				{
					mountainPassarray[3] = newArray[6][3];
				}

				if (newArray[6][3] < newArray[7][3] && newArray[6][3] < mountainPassarray[3])
				{
					mountainPassarray[3] = newArray[6][3];
				}

				else if (newArray[7][3] < newArray[6][3] && newArray[7][3] < mountainPassarray[3])
				{
					mountainPassarray[3] = newArray[7][3];
				}

				if (newArray[7][3] < newArray[8][3] && newArray[7][3] < mountainPassarray[3])
				{
					mountainPassarray[3] = newArray[7][3];
				}

				else if (newArray[8][3] < newArray[7][3] && newArray[8][3] < mountainPassarray[3])
				{
					mountainPassarray[3] = newArray[8][3];
				}


				// Fourth Row
				currentRowPostion = 4;

				if (newArray[0][4] < newArray[1][4])
				{
					mountainPassarray[4] = newArray[0][4];
				}

				else if (newArray[1][4] < newArray[0][4])
				{
					mountainPassarray[4] = newArray[1][4];
				}

				//

				if (newArray[1][4] < newArray[2][4] && newArray[1][4] < mountainPassarray[4])
				{
					mountainPassarray[4] = newArray[1][4];
				}

				else if (newArray[2][4] < newArray[1][4] && newArray[2][4] < mountainPassarray[4])
				{
					mountainPassarray[4] = newArray[2][4];
				}

				if (newArray[2][4] < newArray[3][4] && newArray[2][4] < mountainPassarray[4])
				{
					mountainPassarray[4] = newArray[2][4];
				}

				else if (newArray[3][4] < newArray[2][4] && newArray[3][4] < mountainPassarray[4])
				{
					mountainPassarray[4] = newArray[3][4];
				}

				if (newArray[3][4] < newArray[4][4] && newArray[3][4] < mountainPassarray[4])
				{
					mountainPassarray[4] = newArray[3][4];
				}

				else if (newArray[4][4] < newArray[3][4] && newArray[4][4] < mountainPassarray[4])
				{
					mountainPassarray[4] = newArray[4][4];
				}

				if (newArray[4][4] < newArray[5][4] && newArray[4][4] < mountainPassarray[4])
				{
					mountainPassarray[4] = newArray[4][4];
				}

				else if (newArray[5][4] < newArray[4][4] && newArray[5][4] < mountainPassarray[4])
				{
					mountainPassarray[4] = newArray[5][4];
				}

				if (newArray[5][4] < newArray[6][4] && newArray[5][4] < mountainPassarray[4])
				{
					mountainPassarray[4] = newArray[5][4];
				}

				else if (newArray[6][4] < newArray[5][4] && newArray[6][4] < mountainPassarray[4])
				{
					mountainPassarray[4] = newArray[6][4];
				}



				if (newArray[6][4] < newArray[7][4] && newArray[6][4] < mountainPassarray[4])
				{
					mountainPassarray[4] = newArray[6][4];
				}

				else if (newArray[7][4] < newArray[6][4] && newArray[7][4] < mountainPassarray[4])
				{
					mountainPassarray[4] = newArray[7][4];
				}


				if (newArray[7][4] < newArray[8][4] && newArray[7][4] < mountainPassarray[4])
				{
					mountainPassarray[4] = newArray[7][4];
				}

				else if (newArray[8][4] < newArray[7][4] && newArray[8][4] < mountainPassarray[4])
				{
					mountainPassarray[4] = newArray[8][4];
				}


				// Fifth Row
				currentRowPostion = 5;

				if (newArray[0][5] < newArray[1][5])
				{
					mountainPassarray[5] = newArray[0][5];
				}

				else if (newArray[1][5] < newArray[0][5])
				{
					mountainPassarray[5] = newArray[1][5];
				}

				//

				if (newArray[1][5] < newArray[2][5] && newArray[1][5] < mountainPassarray[5])
				{
					mountainPassarray[5] = newArray[1][5];
				}

				else if (newArray[2][5] < newArray[1][5] && newArray[2][5] < mountainPassarray[5])
				{
					mountainPassarray[5] = newArray[2][5];
				}


				if (newArray[2][5] < newArray[3][5] && newArray[2][5] < mountainPassarray[5])
				{
					mountainPassarray[5] = newArray[2][5];
				}

				else if (newArray[3][5] < newArray[2][5] && newArray[3][5] < mountainPassarray[5])
				{
					mountainPassarray[5] = newArray[3][5];
				}

				if (newArray[3][5] < newArray[4][5] && newArray[3][5] < mountainPassarray[5])
				{
					mountainPassarray[5] = newArray[3][5];
				}

				else if (newArray[4][5] < newArray[3][5] && newArray[4][5] < mountainPassarray[5])
				{
					mountainPassarray[5] = newArray[4][5];
				}

				if (newArray[4][5] < newArray[5][5] && newArray[4][5] < mountainPassarray[5])
				{
					mountainPassarray[5] = newArray[4][5];
				}

				else if (newArray[5][5] < newArray[4][5] && newArray[5][5] < mountainPassarray[5])
				{
					mountainPassarray[5] = newArray[5][5];
				}

				if (newArray[5][5] < newArray[6][5] && newArray[5][5] < mountainPassarray[5])
				{
					mountainPassarray[5] = newArray[5][5];
				}

				else if (newArray[6][5] < newArray[5][5] && newArray[6][5] < mountainPassarray[5])
				{
					mountainPassarray[5] = newArray[6][5];
				}

				if (newArray[6][5] < newArray[7][5] && newArray[6][5] < mountainPassarray[5])
				{
					mountainPassarray[5] = newArray[6][5];
				}

				else if (newArray[7][5] < newArray[6][5] && newArray[7][5] < mountainPassarray[5])
				{
					mountainPassarray[5] = newArray[7][5];
				}

				if (newArray[7][5] < newArray[8][5] && newArray[7][5] < mountainPassarray[5])
				{
					mountainPassarray[5] = newArray[7][5];
				}

				else if (newArray[8][5] < newArray[7][5] && newArray[8][5] < mountainPassarray[5])
				{
					mountainPassarray[5] = newArray[8][5];
				}


				// Sixth Row
				currentRowPostion = 6;

				if (newArray[0][6] < newArray[1][6])
				{
					mountainPassarray[6] = newArray[0][6];
				}

				else if (newArray[1][6] < newArray[0][6])
				{
					mountainPassarray[6] = newArray[1][6];
				}

				//


				if (newArray[1][6] < newArray[2][6] && newArray[1][6] < mountainPassarray[6])
				{
					mountainPassarray[6] = newArray[1][6];
				}

				else if (newArray[2][6] < newArray[1][6] && newArray[2][6] < mountainPassarray[6])
				{
					mountainPassarray[6] = newArray[2][6];
				}

				if (newArray[2][6] < newArray[3][6] && newArray[2][6] < mountainPassarray[6])
				{
					mountainPassarray[6] = newArray[2][6];
				}

				else if (newArray[3][6] < newArray[2][6] && newArray[3][6] < mountainPassarray[6])
				{
					mountainPassarray[6] = newArray[3][6];
				}

				if (newArray[3][6] < newArray[4][6] && newArray[3][6] < mountainPassarray[6])
				{
					mountainPassarray[6] = newArray[3][6];
				}

				else if (newArray[4][6] < newArray[3][6] && newArray[4][6] < mountainPassarray[6])
				{
					mountainPassarray[6] = newArray[4][6];
				}

				if (newArray[4][6] < newArray[5][6] && newArray[4][6] < mountainPassarray[6])
				{
					mountainPassarray[6] = newArray[4][6];
				}

				else if (newArray[5][6] < newArray[4][6] && newArray[5][6] < mountainPassarray[6])
				{
					mountainPassarray[6] = newArray[5][6];
				}

				if (newArray[5][6] < newArray[6][6] && newArray[5][6] < mountainPassarray[6])
				{
					mountainPassarray[6] = newArray[5][6];
				}

				else if (newArray[6][6] < newArray[5][6] && newArray[6][6] < mountainPassarray[6])
				{
					mountainPassarray[6] = newArray[6][6];
				}

				if (newArray[6][6] < newArray[7][6] && newArray[6][6] < mountainPassarray[6])
				{
					mountainPassarray[6] = newArray[6][6];
				}

				else if (newArray[7][6] < newArray[6][6] && newArray[7][6] < mountainPassarray[6])
				{
					mountainPassarray[6] = newArray[7][6];
				}

				if (newArray[7][6] < newArray[8][6] && newArray[7][6] < mountainPassarray[6])
				{
					mountainPassarray[6] = newArray[7][6];
				}

				else if (newArray[8][6] < newArray[7][6] && newArray[8][6] < mountainPassarray[6])
				{
					mountainPassarray[6] = newArray[8][6];
				}

				// Seventh Row
				currentRowPostion = 7;

				if (newArray[0][7] < newArray[1][7])
				{
					mountainPassarray[7] = newArray[0][7];
				}

				else if (newArray[1][7] < newArray[0][7])
				{
					mountainPassarray[7] = newArray[1][7];
				}

				//

				if (newArray[1][7] < newArray[2][7] && newArray[1][7] < mountainPassarray[7])
				{
					mountainPassarray[7] = newArray[1][7];
				}

				else if (newArray[2][7] < newArray[1][7] && newArray[2][7] < mountainPassarray[7])
				{
					mountainPassarray[7] = newArray[2][7];
				}

				if (newArray[2][7] < newArray[3][7] && newArray[3][7] < mountainPassarray[7])
				{
					mountainPassarray[7] = newArray[2][7];
				}

				else if (newArray[3][7] < newArray[2][7] && newArray[3][7] < mountainPassarray[7])
				{
					mountainPassarray[7] = newArray[3][7];
				}

				if (newArray[3][7] < newArray[4][7] && newArray[3][7] < mountainPassarray[7])
				{
					mountainPassarray[7] = newArray[3][7];
				}

				else if (newArray[4][7] < newArray[3][7] && newArray[4][7] < mountainPassarray[7])
				{
					mountainPassarray[7] = newArray[4][7];
				}

				if (newArray[4][7] < newArray[5][7] && newArray[4][7] < mountainPassarray[7])
				{
					mountainPassarray[7] = newArray[4][7];
				}

				else if (newArray[5][7] < newArray[4][7] && newArray[5][7] < mountainPassarray[7])
				{
					mountainPassarray[7] = newArray[5][7];
				}

				if (newArray[5][7] < newArray[6][7] && newArray[5][7] < mountainPassarray[7])
				{
					mountainPassarray[7] = newArray[5][7];
				}

				else if (newArray[6][7] < newArray[5][7] && newArray[6][7] < mountainPassarray[7])
				{
					mountainPassarray[7] = newArray[6][7];
				}

				if (newArray[6][7] < newArray[7][7] && newArray[6][7] < mountainPassarray[7])
				{
					mountainPassarray[7] = newArray[6][7];
				}

				else if (newArray[7][7] < newArray[6][7] && newArray[7][7] < mountainPassarray[7])
				{
					mountainPassarray[7] = newArray[7][7];
				}

				if (newArray[7][7] < newArray[8][7] && newArray[7][7] < mountainPassarray[7])
				{
					mountainPassarray[7] = newArray[7][7];
				}

				else if (newArray[8][7] < newArray[7][7] && newArray[8][7] < mountainPassarray[7])
				{
					mountainPassarray[7] = newArray[8][7];
				}

				// Eighth Row
				currentRowPostion = 8;

				if (newArray[0][8] < newArray[1][8])
				{
					mountainPassarray[8] = newArray[0][8];
				}

				else if (newArray[1][8] < newArray[0][8])
				{
					mountainPassarray[8] = newArray[1][8];
				}


				//
				if (newArray[1][8] < newArray[2][8] && newArray[1][8] < mountainPassarray[8])
				{
					mountainPassarray[8] = newArray[1][8];
				}

				else if (newArray[2][8] < newArray[1][8] && newArray[2][8] < mountainPassarray[8])
				{
					mountainPassarray[8] = newArray[2][8];
				}

				if (newArray[2][8] < newArray[3][8] && newArray[2][8] < mountainPassarray[8])
				{
					mountainPassarray[8] = newArray[2][8];
				}

				else if (newArray[3][8] < newArray[2][8] && newArray[3][8] < mountainPassarray[8])
				{
					mountainPassarray[8] = newArray[3][8];
				}

				if (newArray[3][8] < newArray[4][8] && newArray[3][8] < mountainPassarray[8])
				{
					mountainPassarray[8] = newArray[3][8];
				}

				else if (newArray[4][8] < newArray[3][8] && newArray[4][8] < mountainPassarray[8])
				{
					mountainPassarray[8] = newArray[4][8];
				}

				if (newArray[4][8] < newArray[5][8] && newArray[4][8] < mountainPassarray[8])
				{
					mountainPassarray[8] = newArray[4][8];
				}

				else if (newArray[5][8] < newArray[4][8] && newArray[5][8] < mountainPassarray[8])
				{
					mountainPassarray[8] = newArray[5][8];
				}

				if (newArray[5][8] < newArray[6][8] && newArray[5][8] < mountainPassarray[8])
				{
					mountainPassarray[8] = newArray[5][8];
				}

				else if (newArray[6][8] < newArray[5][8] && newArray[6][8] < mountainPassarray[8])
				{
					mountainPassarray[8] = newArray[6][8];
				}

				if (newArray[6][8] < newArray[7][8] && newArray[6][8] < mountainPassarray[8])
				{
					mountainPassarray[8] = newArray[6][8];
				}

				else if (newArray[7][8] < newArray[6][8] && newArray[7][8] < mountainPassarray[8])
				{
					mountainPassarray[8] = newArray[7][8];
				}

				if (newArray[7][8] < newArray[8][8] && newArray[7][8] < mountainPassarray[8])
				{
					mountainPassarray[8] = newArray[7][8];
				}

				else if (newArray[8][8] < newArray[7][8] && newArray[8][8] < mountainPassarray[8])
				{
					mountainPassarray[8] = newArray[8][8];
				}

			}

		}


		for (int m = 0; m < maxsize; m++) // Print out the mountain passed array, seperated by commas
		{
			cout << mountainPassarray[m] << ",";

		}






	}

}




void DisplayMap()
{


}


//// I had a an edited start menu, so when the user is bought into this new menu,
//it reduces the chance of breaking the program, for example the user putting an incorrect number.

void EditedStartMenu() {

	string userMenuOptionChoice;
	cout << "2. Display Map file" << endl;
	cout << "3. Quit the program" << endl;
	cin >> userMenuOptionChoice;


	while (userMenuOptionChoice != "2" && userMenuOptionChoice != "3")
	{
		cout << "" << endl;
		cout << "Sorry that doesn't seem to be option, please select an option by writing the assigned first number." << endl;
		cout << "3. Quit the program" << endl;
		cin >> userMenuOptionChoice;
	}

	if (userMenuOptionChoice == "3") // Makes a "Quit" function to enable the user to exit the program after they enter "3".
	{
		cout << "" << endl;
		cout << "Thanks for using Map Reader!" << endl;
		cout << "" << endl;
		return;
	}



}

//This function handles the program's interface and performs some input vaildation.

void StartMenu() {
	string welcomeMessage = "            Welcome to the Map Reader 0000.0!";
	string userMenuOptionChoice;

	cout << welcomeMessage << endl;
	cout << "" << endl;
	cout << "                What would you like to do?" << endl;
	cout << "" << endl;
	cout << "Just enter the number of the feature you would like to perform." << endl;
	cout << "1. Read Map file" << endl;
	cout << "2. Display Map file" << endl;
	cout << "3. Quit the program" << endl;
	cin >> userMenuOptionChoice;

	if (userMenuOptionChoice == "1")
	{
		ifstream tempinfile;
		ReadMap(tempinfile);

	}

	// Allows the user to try again, if they put in a incorrect number.
	while (userMenuOptionChoice != "1" &&  userMenuOptionChoice != "2" && userMenuOptionChoice != "3")
	{
		cout << "" << endl;
		cout << "Sorry that doesn't seem to be option, please select an option by writing the assigned first number." << endl;
		cout << "1. Read Map file" << endl;
		cout << "2. Display Map file" << endl;
		cout << "3. Quit the program" << endl;
		cin >> userMenuOptionChoice;
	}

	if (userMenuOptionChoice == "3") // Makes a "Quit" function to enable the user to exit the program after they enter "3".
	{
		cout << "" << endl;
		cout << "Thanks for using Map Reader!" << endl;
		cout << "" << endl;
		return;
	}

}


int main()
{
	//MountainPass();
	StartMenu();

	ifstream savedInfile;
	char ch;
	savedInfile >> ch;
	//ReadMap(savedInfile);

	system("pause");
}

