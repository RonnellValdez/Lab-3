
#include "pch.h"
#include <iostream>
using namespace std;


int main()
{
	int i = 18, j, answer1;
	int answer2;
	double answer3, answer4;

	cout << "Enter integer values for i and j:";	//Get input from the user
	cin >> i >> j;
	answer1 = i / j;	//integer division
	answer2 = i % j;	//modulus operator

	cout << "\nint variable " << i << " / " << j << " = " << answer1 << endl;
	cout << "int variables " << i << " % " << j << " = " << answer2 << endl<<endl;

	i++;	//increment operator
	j--;	//decrement operator
	cout << "i is now: " << i << ", j is now: " << j << endl << endl;

	answer3 = i / j;
	answer4 = (double)i / j;	//example of typecasting
	cout << "double answer3 = " << i << " / " << j << " = " << answer3 << endl;
	cout << "double answer4 = " << i << " / " << j << " = " << answer4 << endl;
	
	return 0;

}

