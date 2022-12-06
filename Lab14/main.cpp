//**********************************************************************
// File:       main.cpp
// Author:     CS, Pacific University
// Date:       12/6/22
// Class:      CS 150-XX
// Assignment: Structs Lab
// Purpose:    Read in a series of points and display the point
//						 closest to the origin.
// Hours:
//**********************************************************************
#include <iostream>
#include <fstream>

using namespace std;

const int MAX_POINTS = 100;

struct Point {
	double mX, mY;
};

void displayPoint (const Point &sPoint);
double getDistance (double x1, double y1, double x2, double y2);
void readPoints (ifstream &inFile, Point sPoints[], int &size);

/***********************************************************************
Function:     main

Description:  Performs some calculations on points as described in the
							program's purpose.

Parameters:   None

Returned:     Exit Status
***********************************************************************/
int main () {
	ifstream inFile;
	Point sPoints[MAX_POINTS];
	Point sClosestPoint;
	int size = 0;

	inFile.open ("points.txt");
	if (inFile.fail ()) {
		cout << "Error opening file" << endl;
		exit (EXIT_FAILURE);
	}

	// TODO#1: Read in all points from the file
	readPoints (inFile, sPoints, size);

	// TODO#1.5: Complete the function displayPoint


	// TODO#2: Calculate the point closest to the origin

	if (size > 0) {
		cout << "Point closest to origin is: ";
		displayPoint (sClosestPoint);
		cout << endl;
	}

	inFile.close ();

	return EXIT_SUCCESS;
}

/***********************************************************************
Function:			displayPoint

Description:	Prints a point in the form (X, Y)

Parameters:		sPoint - point to be displayed

Returned:			None
***********************************************************************/
void displayPoint (const Point &sPoint) {
	// TODO#1.5: Complete the function displayPoint
}

/***********************************************************************
Function:			getDistance

Description:	Calculate the distance between the points. Return distance.

Parameters:		x1 - the x value of the first point
							y1 - the y value of the first point
							x2 - the x value of the second point
							y2 - the y value of the second point

Returned:			the distance between the points
***********************************************************************/
double getDistance (double x1, double y1, double x2, double y2) {
	const double SQUARE = 2.0;

	return sqrt (pow ((x2 - x1), SQUARE) + pow ((y2 - y1), SQUARE));

}

/***********************************************************************
Function:			readPoints

Description:	Reads each point into an array of structs. The file is
							already open for reading.

Parameters:		infile	- stream to read from
							sPoints	- array of points
							size		- number of points read into the array

Returned:			None
***********************************************************************/
void readPoints (ifstream &inFile, Point sPoints[], int &size) {
	
}