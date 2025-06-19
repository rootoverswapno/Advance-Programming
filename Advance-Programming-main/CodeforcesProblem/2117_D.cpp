#include<bits/stdc++.h>
using namespace std;
void solve_by_rootover()
{
int n;
cin>>n;
vector<int>v(n);
for(int &num:v)
{
    cin>>num;
}
int y_val=(2*v[0]-v[1]);
int y=y_val/(n+1);
int x=v[0]-n*y;
if(y_val<0||y_val%(n+1)!=0)
{
    cout<<"NO"<<endl;
    return;
}
if(x<0)
{
    cout<<"NO"<<endl;
    return;
}

for(int i = 0; i < n; ++i)
{
    if(v[i] != x * (i + 1) + y * (n - i))
    {
        cout << "NO" << endl;
        return;
    }
}

cout<<"YES"<<endl;
return;


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