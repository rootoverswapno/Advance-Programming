#include<bits/stdc++.h>
using namespace std;
void solve_by_rootover()
{
int n,s;
cin>>n>>s;
vector<int>v(n);
for(int &num:v)
{
    cin>>num;
}
vector<bool>vis(n);

int mx_element=*max_element(v.begin(),v.end());
int mn_element=*min_element(v.begin(),v.end());
int dis=abs(mx_element-mn_element);
int step;
if(s<mn_element)
{
    step=abs(s-mn_element);
}
else if(mn_element<=s&&s<=mx_element)
{
    int min_step=min(abs(s-mn_element),abs(s-mx_element));
    step=min_step;
}
else
{
    step=abs(s-mx_element);
}
cout<<step+dis<<endl;

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