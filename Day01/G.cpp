// G - Increasing Array

#include <iostream>
#include <vector>

#define ll long long
using namespace std;

int main() {
	int n; cin >> n;
	ll count = 0;
	vector<int> tab(n);

	for (int i = 0; i < n; i++)
	{
		cin >> tab[i];
	}
	for (int i = 1; i < n; i++)
	{
		if (tab[i] < tab[i-1])
		{
    		count += tab[i - 1] - tab[i];
    		tab[i] = tab[i - 1];
		}
	}
	cout << count << "\n";
}