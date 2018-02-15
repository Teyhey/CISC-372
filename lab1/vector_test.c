// John Tejeda

#include "types.h"
#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int main(int argc, const char* argv[]) {
	unsigned int N; // Input the the user will enter in console.
	vector<int> vect;
	int i;
	int trip_1;
	int trip_2;
	int trip_3;
	string trips;

	cout << "Number of elements ===> ";
	cin >> N;

Vector3t[] points = new Vector3t[N];

for(int e = 0; e < points.size();, e++) {
	cout << "Please enter 3 integers (comma separated): ";
	cin >> trips;

	stringstream split_Ints(trips); // Splits the String up into little bits.

	while (ss >> i)
	{
		vect.push_back(i);

		if (ss.peek() == ',' || ss.peek() == ' ')
		ss.ignore();
	}

	for (int i = 0; i < vect.size(); i++)
	cout << vect.at(i) << endl;

	points[e].x = vect.at(0);
	points[e].y = vect.at(1);
	points[e].z = vect.at(2);
} // for

} // main

