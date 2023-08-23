#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

bool is_valid(vector<int> &arr, int n, int k, long long mid)
{
	int count = 1;
	long long currentSum = 0;

	for (int i = 0; i < n; i++)
	{
		if (arr[i] > mid)
			return false;

		if (currentSum + arr[i] > mid)
		{
			count++;
			currentSum = arr[i];
		}
		else
			currentSum += arr[i];
	}

	return count <= k;
}

long long mini_max_subarrSum(vector<int> &arr, int n, int k)
{
	long long m = *max_element(arr.begin(), arr.end());
	long long sum = accumulate(arr.begin(), arr.end(), 0LL);
	long long mid; 

	
	long long result = sum;

	while (m <= sum)
	{
		mid = (m + sum) / 2;

		if (is_valid(arr, n, k, mid))
		{
			result = mid;
			sum = mid - 1;
		}
		else
			m = mid + 1;
	}
	return (result);
}

int main()
{
	int n;
	int k;
	cin >> n >> k;

	vector<int> arr(n);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	cout << mini_max_subarrSum(arr, n, k) << "\n";
	return 0;
}
