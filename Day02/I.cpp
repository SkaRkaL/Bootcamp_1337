// The greatest common divisor n natural numbers are given. Write a program that calculates the greatest common divisor of these numbers.


#include <iostream>
using namespace std;

int gcd(int a, int b)
{
	int max;
	if (b == 0)
		return a;
	max = gcd(b, a % b);
	if (max < b)
		max = b;
	return (max);	
}

int main()
{
	int n, a, b;
	
	cin >> n >> a;
	for (int i = 1; i < n; i++)
	{
		cin >> b;
		a = gcd(a, b);
	}
	cout << a << "\n";
	return 0;
}
