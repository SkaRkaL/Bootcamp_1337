#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

typedef long long lld;

#define sf scanf
#define pf printf

const int MOD = 1000000007;
const int MAX = 1000001;
bool prime[MAX];

void sieve()
{
	int i, j;
	prime[0] = prime[1] = true;

	for (i = 4; i < MAX; i += 2)
		prime[i] = true;

	for (i = 3; i * i <= MAX; i += 2)
		if (!prime[i])
			for (j = i * i; j < MAX; j += 2 * i)
				prime[j] = true;
}

int main(void)
{
	sieve();

	int tc;
	lld n, r;

	sf("%d", &tc);

	while (tc--)
	{
		sf("%lld", &n);

		r = sqrt(n);

		if (!prime[r] && r * r == n)
			pf("YES\n");
		else
			pf("NO\n");
	}

	return 0;
}