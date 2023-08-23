#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() 
{ 
    int n, len;
    vector<int> v;
    cin >> n;
    cout << n << ": ";
    while (n % 2 == 0) 
    { 
        v.push_back(2);
        n = n/2;
    }

    for (int i = 3; i <= sqrt(n); i = i + 2) 
    { 
        while (n % i == 0) 
        { 
            v.push_back(i);
            n = n/i;
        }
    }
    if (n > 2) 
        v.push_back(n);

    len = v.size();
    for(int i = 0; i < len; i++)
    {
        cout << v[i];
        if(i != len - 1)
            cout << " ";
    }

    cout << "\n";

    return 0;
} 