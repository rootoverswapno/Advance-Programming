#include <bits/stdc++.h>
using namespace std;

void solve_by_Swapnomoy()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int ct1 = 0;
    int ct2 = 0;
    for (auto ch : s)
    {
        if (ch == '0')
        {
            ct1++;
        }
        else
        {
            ct2++;
        }
    }
    int x=n/2;
    int non_good=x-k;
   if(ct1>=non_good&&ct2>=non_good)
   {
    cout<<"YES"<<endl;
   }
   else
   {
    cout<<"NO"<<endl;
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