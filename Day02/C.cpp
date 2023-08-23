#include <iostream>
#include <cmath>

using namespace std;

typedef long long ll;

ll mod = 1e9 + 7;
 
ll powerr(ll a, ll b)
{
    ll res = 1;
    if (b == 0)
        return 1;
    if (b == 1)
        return a;
    ll tmp = powerr(a, b / 2);
    if (b % 2 == 0)
        res = ((tmp % mod) * (tmp % mod)) % mod;
    else
        res = ((((tmp % mod) * (tmp % mod)) % mod) * (a % mod)) % mod;
    return res;
}

int main()
{
    ll n, res = 1;
    cin >> n;
    res = powerr(3, n);
    cout << res;
}