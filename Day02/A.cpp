#include <iostream>
#include <set>

using namespace std;

typedef unsigned long long ll;

int main()
{
    ll n;
    cin >> n;

    set<ll> B;

    for (ll i = 0; i < n; i++)
    {
        ll val;
        cin >> val;
        B.insert(val);
    }

    ll m;
    cin >> m;

    for (ll i = 0; i < m; i++)
    {
        ll query;
        cin >> query;
        
        if (B.count(query))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
