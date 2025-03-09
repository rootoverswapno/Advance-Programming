#include <bits/stdc++.h>
using namespace std;
void getPermutation(vector<int>&v,int ind,vector<vector<int>>&result)
{
    if(ind==v.size())
    {
        result.push_back(v);
        return;
    }
    for(int i=ind;i<v.size();++i)
    {
        swap(v[ind],v[i]);
        getPermutation(v,ind+1,result);
        swap(v[ind],v[i]);
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
  vector<vector<int>>result;
  getPermutation(v,0,result);
  cout<<endl<<endl;
  for(auto i:result)
  {
    for(auto j:i)
    {
        cout<<j<<" ";
    }
    cout<<endl;
  }


    return 0;
}