#include <bits/stdc++.h>
using namespace std;
void getcombination(vector<int>&v,vector<int>&vv,vector<vector<int>>&result,int ind)
{
    result.push_back(vv);
    
    for(int i=ind;i<v.size();++i)
    {
        if(i>ind&&v[i]==v[i-1])continue;
        vv.push_back(v[i]);
        getcombination(v,vv,result,i+1);
        vv.pop_back();
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

   int n;
   cin>>n;
   vector<int>v(n);
   for(auto &num:v)
   {
    cin>>num;
   }
   vector<vector<int>>result;
   vector<int>vv;
   getcombination(v,vv,result,0);

   cout<<endl;
   for(auto it:result)
   {
    for(auto i:it)
    {
        cout<<i<<" ";
    }
     cout<<endl;
   }

    return 0;
}