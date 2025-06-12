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
int t;
cin>>t;
while(t--)
{
    int n,x;
    cin>>n>>x;
    vector<int>v(n);
    for(int &i:v)
    {
        cin>>i;
    }
int low=n;
int high=-1;
for(int i=0;i<n;++i)
{
    if(v[i]==1)
    {
         low=min(i,low);
         high=max(i,high);
    }
}

if((high-low+1)<=x)
{
    cout<<"YES"<<endl;
}
else
{
    cout<<"NO"<<endl;
}

}

return 0;
}