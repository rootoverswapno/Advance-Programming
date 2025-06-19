#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
    if(n==0)return 1;
    return n*fact(n-1);
}
int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);

int n;
cin>>n;

int fact=1;
for(int i=2;i<=n;++i)
{
    fact=fact*i;
}
cout<<fact<<endl;
// cout<<fact(n)<<endl;


return 0;
}