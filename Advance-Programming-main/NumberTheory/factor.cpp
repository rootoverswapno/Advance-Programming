#include<bits/stdc++.h>
using namespace std;
int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
int n;
cin>>n;
vector<int>res;
int ct=0;
int sum=0;
for(int i=1;i*i<=n;++i)
{
    if(n%i==0)
    {
       sum+=i;
       res.push_back(i);
       ct++;
       if(n/i!=i)
       {
        res.push_back(n/i);
        sum+=n/i;
        ct++;
       }
    }
}
for(auto &num:res)
{
    cout<<num<<" ";
}
cout<<endl<<sum<<" "<<ct<<endl;



return 0;
}