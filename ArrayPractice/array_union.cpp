#include <bits/stdc++.h>
using namespace std;
vector<int>find(vector<int>&v,vector<int>&vv)
{
    map<int,int>mp;
    vector<int>res;
    for(int i=0;i<v.size();++i)
    {
        mp[v[i]]++;
    }
    for(int i=0;i<vv.size();++i)
    {
        mp[vv[i]]++;
    }
    for(auto &i:mp)
    {
      res.push_back(i.first);
    }
    return res;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    vector<int>v(n);
    for(auto &i:v)
    {
        cin>>i;
    }
    vector<int>vv(n);
    for(auto &i:vv)
    {
        cin>>i;
    }

    vector<int>res=find(v,vv);

    for(int num:res)
    {
        cout<<num<<" ";
    }
    cout<<endl;
    return 0;
}