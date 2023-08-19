// C - Easy Stack

#include <iostream>
#include <stack>
using namespace std;

#define enndl "\n"

int main()
{
	ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    stack<int> st;

    while (t--)
	{
        int q;
        cin >> q;

        if (q == 1)
		{
            int n;
            cin >> n;
            st.push(n);
        }
		else if (q == 2)
		{
            if (!st.empty())
                st.pop();
        }
		else if (q == 3)
		{
            if (!st.empty())
                cout << st.top() << enndl;
			else
                cout << "Empty!" << enndl;
        }
    }
    return 0;
}
