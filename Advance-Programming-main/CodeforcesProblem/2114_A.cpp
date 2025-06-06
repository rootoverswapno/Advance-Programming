#include <bits/stdc++.h>
using namespace std;

void solve_by_Swapnomoy()
{
    string s;
    cin >> s;

    int x = stoi(s);
    int root = sqrt(x);
    if (root * root != x)
    {
        cout << -1 << endl;
    }
    else
    {

        int a=0;
        int b=root-a;
        cout<<a<<" "<<b<<endl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        solve_by_Swapnomoy();
    }
    return 0;
}