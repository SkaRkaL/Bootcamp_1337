// D - Fibonacci

#include <iostream>

using namespace std;

long long fibonacci(int n)
{
	if (n == 0 || n == 1)
		return 1;

	long long a = 1, b = 1, result;

	for (int i = 2; i <= n; ++i)
	{
		result = a + b;
		a = b;
		b = result;
	}

	return result;
}

int main(void)
{
	int n;
	cin >> n;
	cout << fibonacci(n) << '\n';
}