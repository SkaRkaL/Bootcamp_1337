// G - Sum of Two Values 

#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int x;
    int y;
    int sum;
    int n;

    cin >> n >> sum;

    vector<int> a(n);
    map<int, int> p;

    x = -1;
    y = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (p.count(sum - a[i]))
        {
            x = p[sum - a[i]];
            y = i + 1;
        }
        p[a[i]] = i + 1;
    }
    if (x == -1)
        cout << "IMPOSSIBLE";
    else
        cout << x << ' ' << y;
}
