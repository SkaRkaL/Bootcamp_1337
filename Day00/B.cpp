// B - Gravity Flip

#include <iostream>

using namespace std;

int main()
{
	int	n;
	int	i;
	int	swp;

	cin >> n;
	int	tab[n];
	for (int i = 0; i < n; i++)
		cin >> tab[i];
	i = 0;
	sort(tab, tab + n);
	for (int i = 0; i < n; i++)
		cout << tab[i] << ' ';
	cout << endl;
}
