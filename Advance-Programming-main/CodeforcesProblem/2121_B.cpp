#include <bits/stdc++.h>
using namespace std;
void solve_by_rootover()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    string s;
    for (int i = 1; i < n - 1; ++i)
    {
        for (int j = 1; i + j < n; ++j)
        {
            string a = str.substr(0, i);
            string b = str.substr(i, j);
            string c = str.substr(i + j);
            string s = a + c;

            if (str.find(s) != string::npos)
            {
                cout << "YES" << endl;
                return;
            }
        }
    }

    
        cout << "NO" << endl;
        return;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int testcase;
    cin >> testcase;
    for (int i = 1; i <= testcase; ++i)
    {
        solve_by_rootover();
    }
    return 0;
}