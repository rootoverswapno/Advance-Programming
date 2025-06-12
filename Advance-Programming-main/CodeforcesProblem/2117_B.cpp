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
    vector<int>v;
    int n;
    cin>>n;
    v.push_back(1);
    int num=n;
    while(num>1)
    {
        v.push_back(num);
        num--;
    }
    for(auto i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}



return 0;
}