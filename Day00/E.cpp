// E - Binary Search Tree 1

#include <iostream>
#include <stack>
#include <set>

using namespace std;

#define ll long long

int main()
{
    set<int> st;

    while (true)
    {
        string str;
        cin >> str;

        if (str.empty())
            return 0;
        ll len = st.size();
        if (str.substr(0, 6) == "insert")
        {
            int x;
            cin >> x;
            st.insert(x);
        }
        if (str.substr(0, 6) == "delete")
        {
            int x;
            cin >> x;
            st.erase(x);
        }
        if (str.substr(0, 6) == "exists")
        {
            int x;
            cin >> x;
            if (st.find(x) != st.end())
                cout << "true" << "\n";
            else
                cout << "false" << "\n";
        }
    }
}
