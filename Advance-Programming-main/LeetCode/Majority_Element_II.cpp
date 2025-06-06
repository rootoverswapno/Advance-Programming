#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
int n;
cin>>n;
vector<int>v(n);
for(int &num:v)
{
    cin>>num;
}
vector<int>res;
sort(v.begin(),v.end());
int fre=1;
int ans=v[0];
for(int i=1;i<=n;++i)
{
    if(v[i]==v[i-1])
    {
        fre++;
    }
    else
    {
        if(fre>floor(n/3))
        {
          res.push_back(v[i-1]);
        }
        fre=1;
    }
}

for(auto el:res)
{
    cout<<el<<" ";
}
cout<<endl;
    return 0;
}