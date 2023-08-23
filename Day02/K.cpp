#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <numeric>
#include <string>

using namespace std;

int pre[1000005];
int bk[1000005];
int arr[1000005];

long long findGCD(long long a, long long b)
{
    if (b == 0)
        return a;
    return findGCD(b, a % b);
}

int main()
{
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {

        cin >> arr[i];
    }
    
    pre[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        pre[i] = findGCD(pre[i - 1], arr[i]);
    }
    
    bk[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        bk[i] = findGCD(bk[i + 1], arr[i]);
    }
    
    long long ans = 1;
    for (int i = 1; i < n; i++)
        ans = max(findGCD(pre[i - 1], bk[i + 1]), ans);
    
    ans = max(ans, max(static_cast<long long>(bk[1]), static_cast<long long>(pre[n - 2])));
    
    cout << ans << endl;
    
    return 0;
}