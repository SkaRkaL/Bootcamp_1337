#include <iostream>
#include <unordered_map>
using namespace std;

const long long MOD = 1000000007;

long long fibonacci(long long n)
{
	unordered_map<long long, long long> memo;
    
    if (n == 0)
        return 0;
	else if (n == 1)
        return 1;

    memo[0] = 0;
    memo[1] = 1;

    for (long long i = 2; i <= n; ++i)
	{
        memo[i] = (memo[i - 1] + memo[i - 2]) % MOD;
    }

    return memo[n];
}

int main()
{
    long long n;
    cin >> n;
    long long result = fibonacci(n);
    cout << result << endl;
    return 0;
}


