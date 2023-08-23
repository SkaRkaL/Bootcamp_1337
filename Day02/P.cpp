#include <iostream>

using namespace std;

const int MOD = ((long long)1e9 + 7);

#define ll long long

ll modInverse(ll a, long long MOD)
{
    // Calculate a^(MOD-2) % MOD using Fermat's Little Theorem
    ll result = 1;
    ll exponent = MOD - 2; // Since MOD is prime, p-1 is the exponent
    while (exponent > 0)
    {
        if (exponent % 2 == 1)
            result = (result * a) % MOD;
        a = (a * a) % MOD;
        exponent /= 2;
    }
    return result;
}

ll fastExponentiation(ll a, ll b, long long MOD)
{
    a %= MOD;
    ll result = 1;
    while (b > 0)
    {
        if (b % 2 == 1)
            result = (result * a) % MOD;
        a = (a * a) % MOD;
        b /= 2;
    }
    return result;
}

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        ll a, b, c;
        cin >> a >> b >> c;

        ll bc = fastExponentiation(b, c, MOD); // b^c
        ll result = fastExponentiation(a, bc, MOD); // a^(b^c)

        cout << result << endl;
    }

    return 0;
}
