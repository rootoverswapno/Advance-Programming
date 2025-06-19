#include<bits/stdc++.h>
using namespace std;
void solve_by_rootover()
{
int n,k;
cin>>n>>k;
string s;
for(int i=1;i<=n;++i)
{
    if(k!=0)
    {
        s+='1';
        k--;
    }
    else
    {
        s+='0';
    }
}
cout<<s<<endl;

}
int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
int testcase;
cin>>testcase;
for(int i=1;i<=testcase;++i)
{
solve_by_rootover();
}
return 0;
}