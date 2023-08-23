#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

int main() 
{
    long a, b, flag = 0;
    cin >> a >> b;
    for(int i = a; i <= b; i++)
    {
        if(isPrime(i))
        {
            flag = 1;
            cout << i << endl;
        }
    }
    if (flag == 0)
        cout << "Absent" << endl;
}