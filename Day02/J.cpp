
#include <iostream>

using namespace std;

#define ll unsigned long long

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

ll lcm(ll a, ll b)
{
    return (a * b) / gcd(a, b);
}

int main(void)
{
    ll a, b;

    cin >> a >> b;

    cout << lcm(a, b) << "\n";
}
