#include <bits/stdc++.h>
using namespace std;
void combination(vector<int>&v,vector<vector<int>>&res,vector<int>&vv,int ind,int r)
{
    if(vv.size()==r)
    {
        res.push_back(vv);
        return;
    }
 
    for(int i=ind;i<v.size();++i)
    {
        vv.push_back(v[i]);
        combination(v,res,vv,i+1,r);
        vv.pop_back();
    }
}
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
 vector<vector<int>>res;
 vector<int>vv;
 int r=2;
  combination(v,res,vv,0,r);
  cout<<endl<<endl;
for(auto &subvec:res)
{
    for(auto &i:subvec)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}


    return 0;
}