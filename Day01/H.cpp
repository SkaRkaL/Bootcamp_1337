// H - Insert Digit

#include <iostream>
#include <stack>
#include <vector>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	char d;
	bool T_F;
	string s;
	int T; cin>> T;


	while (T--)
	{
		cin >> n;
		cin >> d;
		cin >> s;
		T_F = 0;
		for (int i = 0; i < n; i++)
		{
			if (d > s[i])
			{
				T_F = 1;
				s.insert(s.begin() + i, d);
				break ;
			}
		}
		if (!T_F) s += d;
		cout << s << "\n";
	}
}