// Lab04.cpp 
// Jacob Silva
// COSC 2030
// 10/8/18
// Lab 04
// Edited program to manipulate vectors

#include "stdafx.h"
#include "VectorDriver.h"
#include <algorithm>
using std::sort;
using std::begin;
using std::end;


int main() {
	cout << "  ..:: B E G I N  S A M P L E  C O D E  ::.." << endl << endl;
	vector<short> sample_vector(5);
	

	cout << "new vector: ";
	print(sample_vector);
	cout << endl;

	fill_vector(sample_vector);

	cout << "filled vector: ";
	print(sample_vector);
	cout << endl;
	



	cout << "sum of vector's elements: " << compute_sum(sample_vector) << endl;
	cout << endl << "   ..::  E N D   S A M P L E  C O D E  ::.." << endl;
	
	vector<short> vector_2(0);
	cout<<endl << "new vector: ";
	print(vector_2);
	cout << endl;
	
	add_numbers(vector_2);

	cout << "Filled Vector with random values: ";
	print(vector_2);
	cout << endl<< "Vector values using print_even: "<<endl;
	print_even(vector_2);	//prints only data on even index position i.e 0,2,4,6
	cout << endl;
	if (is_present(vector_2, 41) == 1)	// A test of the is_present function
	{
		cout << "Value 41 is present"<<endl;
	}
	else
	{
		cout << "Value 41 is not present"<<endl;
	}
	std::sort(vector_2.begin(), vector_2.end());	// This is using sort, sorts data in ascending order
	cout << " Data in asecending order: " << endl;
	print(vector_2);
	cout << endl;

	//add_numbers(vector_2);												//This was a test to see what happens when vector is filled twice, what happens is the 
																			// vector is filled once, then when filled the second time 10 more numbers are added
	//cout << "Filled Vector with random values again: ";
	//print(vector_2);
	//cout << endl;
	
	
	system("pause");
	return 0;
}
