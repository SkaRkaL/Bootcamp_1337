// D - Parentheses Balance

#include <iostream>
#include <stack>

using namespace std;
#define MAX_LENGTH 129

bool	_correct_(string string)
{
    stack<char>	st;

    for (int i = 0; string[i] != '\0'; ++i)
	{
        if (string[i] == '(' || string[i] == '[')
            st.push(string[i]);
		else if (string[i] == ')')
		{
            if (st.empty() || st.top() != '(')
                return false;
            st.pop();
        }
		else if (string[i] == ']')
		{
            if (st.empty() || st.top() != '[')
                return false;
            st.pop();
        }
    }
    return st.empty();
}

int main()
{
    int n;
    cin >> n;cin.ignore();

    for (int i = 0; i < n; ++i)
	{
        string string;
        getline(cin, string);
        if (_correct_(string))
		{
            cout << "Yes" << endl;
        }
		else
		{
            cout << "No" << endl;
        }
    }

    return 0;
}
