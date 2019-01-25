/*
	Author: James Woods
	Cite: n/a
	Pledge: I pledge my honor that I have abided by the Stevens Honor System
 */

#include <iostream>
using namespace std;

int main() {
	double a, b;
	cout << "Enter a,b: ";
	cin >> a >> b;

	double h;
	h = sqrt((a * a) + (b * b));
	cout << "The hypotenuse is: " << h << endl;

	double area;
	area = (a*b)/2;
	cout << "The area is: " << area << endl;

	return 0;
}