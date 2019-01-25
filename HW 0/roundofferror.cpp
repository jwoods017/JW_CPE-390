/*
	Author: James Woods
	Cite: n/a
	Pledge: I pledge my honor that I have abided by the stevens honor system
*/

#include <iostream>
using namespace std;

int main() {
	
	for (float x = 0.0; x <= 10.0; x = x + 0.1)
	{
		cout << x << " ";
	}
	cout << endl << endl;

	for (double x = 0.0; x <= 10.0; x = x + 0.1)
	{
		cout << x << " ";
	}
	cout << endl;

	return 0;
}