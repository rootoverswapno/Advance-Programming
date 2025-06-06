#include<bits/stdc++.h>
using namespace std;
void fastIO()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
}
int main()
{
fastIO();
int n;
cin>>n;
vector<int>v(n);
for(auto &i:v)
{
    cin>>i;
}
int max_val=0;
int ct=0;
for(auto val:v)
{
    if(val>max_val)
    {
        max_val=val;
        ct=1;
    }
    else if(val==max_val)
    {
        ct++;
    }
}
cout<<ct<<endl;


return 0;
}