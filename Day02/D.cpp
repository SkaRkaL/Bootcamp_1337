// D - Stairs

#include <iostream>
#include <cmath>

using namespace std;


// (k * (k + 1)) / 2 <= n
// k^2 + k - 2n <= 0
// k = (-1 + sqrt(1 + 8n)) / 2

int main()
{
	long long n;
	cin >> n;

	double k = (sqrt(8 * n + 1) - 1) / 2;

	long long maxStairs = static_cast<long long>(k);

	cout << maxStairs << "\n";

	return 0;
}


// 1 <= n <= 2⋅10^5
 