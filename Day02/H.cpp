#include <iostream>
#include <vector>
#include <numeric>

using namespace std;
const int mod = 998244353;
int main()
{
    long long a, b, c, d, e, f;
    long long x, y, ans;
    cin >> a >> b >> c >> d >> e >> f;
    x = ((a % mod) * (b % mod)) % mod;
    x = (x * (c % mod)) % mod;
    y = ((d % mod) * (e % mod)) % mod;
    y = (y * (f % mod)) % mod;
    ans = (x + mod - y) % mod;
    cout << ans << endl;
    return 0;
}