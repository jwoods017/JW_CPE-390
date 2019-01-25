/*
Author: James Woods
Cite: n/a
Pledge: I pledge my honor that I have abided
		    by the Stevens Honor System
*/

/*
#include <iostream>
using namespace std;

int main()
{
	//count from 1 to 10 seperated by a space, then print a new line
	for (int i = 1; i <= 10; i++)
	{
		cout << i << " ";
	}
	cout << endl;

	//count from 10 down to 0
	for (int i = 10; i >= 0; i--)
	{
		cout << i << " ";
	}
	cout << endl;

	//count from 0 to 10 by twos
	for (int i = 0; i <= 10; i += 2)
	{
		cout << i << " ";
	}
	cout << endl;

	//start with 1 and double each time until 1024
	for (int i = 1; i <= 1024; i *= 2)
	{
		cout << i << " ";
	}
	cout << endl;
}
*/

/*
Author: James Woods
	Cite : n / a
	Pledge : I pledge my honor that I have abided
				 by the Stevens Honor System
*/

#include <iostream>
using namespace std;

float fuckthisclass(int n)
{
	double sum = 0;
	for (double i = 1; i <= n; i++) {
		sum = sum + (1 / i);
	}
	return sum;
}

int main()
{
	double a;
	a = fuckthisclass(12);
	cout << a;
}


