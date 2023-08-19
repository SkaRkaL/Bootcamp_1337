// F - Maximum Word Frequency

#include <iostream>
#include <stack>
#include <map>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n; cin >> n;
	
	map<string, int> occ;

	int mxOcc = 0;
	while (n--)
	{
		string s; cin >> s;
		occ[s]++;
		if (occ[s] > mxOcc)
			mxOcc = occ[s];
	}

	map<string,int>::reverse_iterator it = occ.rbegin();
	while (it != occ.rend())
	{
		if (it->second == mxOcc)
		{
			cout << it->first << ' ' << it->second << endl;
			return 0;
		}
		it++;
	}
}