// F - Minimizing Coins

#include <iostream>
#include <set>
#include <vector>
#include <map>

using namespace std;

int main()
{
	int n, x;
	cin >> n >> x;

	vector<int>    a(n);

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	vector<int> dp(x + 1, 1e9);
	dp[0] = 0;
	for (int i = 1; i <= x; i++)
	{
		for (int j = 0; j < a.size(); j++)
		{
			int k = a[j];
			if (k > i)
				continue ;
			dp[i] = min(dp[i], 1 + dp[i - k]);
		}
	}
	cout << (dp[x] == 1e9 ? -1 : dp[x]) << endl;
}