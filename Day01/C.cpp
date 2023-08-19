// C - Subarray Sums II

#include <iostream>
#include <map>

using namespace std;

#define ll long long


int main()
{
    int n, target;
    cin >> n >> target;
    map<ll, int> m;
    ll sum = 0;
    ll ans = 0;
    ll cur;
    m[0] = 1;
    for (int i = 0; i < n; ++i)
    {
        cin >> cur;
        sum += cur;
        ans += m[sum - target];
        m[sum]++;
    }
    cout << ans << "\n";
}