#include <iostream>
#include <cmath>
#define MOD 1000000007
using namespace std;

typedef unsigned long long ull;

ull fastPow(ull A, ull b, ull mod)
{
    A %= MOD;
    ull result = 1;
    while (b > 0)
	{
        if (b % 2 == 1)
            result = (result * A) % mod;
        A = (A * A) % mod;
        b = b / 2;
    }
    return result;
}

int main()
{
    ull n;
    cin >> n;

    for (ull i = 0; i < n; i++)
	{
        ull a, b;
        cin >> a >> b;

        ull res = fastPow(a, b, MOD);
        cout << res << endl;
    }

    return 0;
}
