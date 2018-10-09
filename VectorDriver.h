#pragma once
// Jacob Silva
// COSC 2030
// 10/8/18
// Lab 04
// Edited program to manipulate vectors




/* File: VectorDriver.cpp
* Athr: Dimitri Zarzhitsky
* Date: October 16, 2002
*
* Desc: provides the basic framework and examples for an introduction to
*       the STL::vector, iterators, and the algorithms facilities.
*
* Edited by: Rafe Cooley
* Date: October 1, 2017 (the future)
*
*/
typedef unsigned long ulong;

#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

// fill vector that has pre-allocated space with consecutive numbers
void fill_vector(vector<short> &data) {
	for (ulong i = 0; i<data.size(); i++) {
		data.at(i) = i;
	}
}



// print our vector in a fancy way
void print(const vector<short> &data) {
	if (data.empty()) {
		cout << "<empty>";
	}
	else {
		cout << "<" << data.at(0);
		for (ulong i = 1; i<data.size(); i++) {
			cout << ", " << data.at(i);
		}
		cout << ">";
	}
}

// use iterator to sum the elements of a vector
short compute_sum(const vector<short> &data) {
	std::vector<short>::const_iterator iter = data.begin();

	short sum = 0;
	while (iter != data.end()) {
		sum += *iter;
		iter++;
	}

	return sum;
}

// TODO: implement add_numbers
//adds ten random numbers to an empty vector
void add_numbers(vector<short> &data)
{
	for (ulong i = 0; i <10; i++)
	{
		data.push_back(rand());
	}
}
// TODO: implement print_even
// prints out the data in the vector only in even index positions. Such as position 0,2,4 etc in the vector.

void print_even(const vector<short>& data)
{
	if (data.empty()) {
		cout << "<empty>";
	}
	else {
		cout << "<" << data.at(0);
		for (ulong i = 2; i<data.size(); i = i + 2) {
			cout << ", " << data.at(i);
		}
		cout << ">";
	}

}

// TODO: implement is_present
// Iterates throught the vector looking for a specific value, if value detected returns true

bool is_present(const vector<short> &data, short value) 
{
	std::vector<short>::const_iterator iter = data.begin();

	while (iter != data.end()) 
	{
		if (*iter==value)
		{
			return true;
		}

		iter++;
	}

	return false;
}


// TODO: implement std::sort function
// this function sorts the data of the vector in ascending order. This sorting is done in the .cpp not in the header
