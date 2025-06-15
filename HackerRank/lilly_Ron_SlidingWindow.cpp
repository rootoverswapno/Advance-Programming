#include<bits/stdc++.h>
using namespace std;
int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
 int n,m,d;
 cin>>n>>m>>d;
 vector<int>v(n);
 int sum=0;
 for(auto &num:v)
 {
    cin>>num;
 }
for(int i=0;i<m;++i)
{
    sum+=v[i];
}
int counter=0;
if(sum==d)counter++;

for(int i=m;i<n;++i)
{
    sum=sum-v[i-m]+v[i];
    if(sum==d)counter++;
}
cout<<counter<<endl;


return 0;
}