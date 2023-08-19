// I - Two Sets

#include <iostream>
#include <set>
#include <stack>
#include <vector>
#include <string>

using namespace std;

void __Set(set<int> &st)
{
	cout << st.size() << '\n';
	for (int i: st)
		cout << i << ' ';
	cout << '\n';
}

int main()
{
	long long   n;
	long long s = 0;

    cin >> n;
	long long sum = (n * (n + 1)) / 2;

	if (sum % 2 == 1)
    {
		cout << "NO\n";
		return 0;
	}


	set<int> a, b;
	for (int i = n; i >= 1; i--)
    {
		if (s + i > sum / 2)
			b.insert(i);
        else
        {
			s += i;
			a.insert(i);
		}
	}
	cout << "YES\n";
	__Set(a);
	__Set(b);
}