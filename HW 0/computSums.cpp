/*
Author: James Woods
	Cite : n / a
	Pledge : I pledge my honor that I have abided
				 by the Stevens Honor System
*/

#include <iostream>
using namespace std;

// sum the numbers from 1 to n and return the answer
int sum(int n) {
	int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		sum = sum + i;
	}
	return sum;
}

// sum the numbers from 1/1 to 1/n and return
float sumReciprocals(int n) {
	float sum = 0;
	for (float i = 1; i <= n; i++) {
		sum = sum + (1 / i);
	}
	return sum;
}

// sum the numbers from 1/n to 1/1 (same as above but reversed) and return
float sumReciprocalsReverse(int n) {
	float sum = 0;
	for (float i = n; i >= 1; i--)
	{
		sum = sum + (1 / i);
	}
	return sum;
}

int main() {
	cout << sum(100) << '\n';
	cout << sumReciprocals(100) << '\n';
	cout << sumReciprocalsReverse(100) << '\n';
}