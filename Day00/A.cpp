// A - Increase by 2

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x >= 0)
            cout << x + 2;
        else
            cout << x;
        if (i != n - 1)
            cout << ' ';
    }
    cout << endl;
}
