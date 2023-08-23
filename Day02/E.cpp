#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

const double PI = acos(-1.0);
// Ax + Bsin(x)
double equation(double A, double B, double x)
{
	return A * x + B * sin(x);
}

double binary_search(double A, double B, double C)
{
	double low = 0.0;
	double high = C;
	double value;
	double mid;
	
	for (int i = 0; i < 100; ++i)
	{
		mid = (low + high) / 2.0;
		value = equation(A, B, mid);
		
		if (abs(value - C) < 1e-9)
			return mid;
		(value < C) ? (low = mid) : (high = mid);
	}
	return (low + high) / 2.0;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t)
	{
		double A, B, C;
		cin >> A >> B >> C;
		double result = binary_search(A, B, C);
		cout << fixed << setprecision(6) << result << endl;
	}

	return 0;
}
