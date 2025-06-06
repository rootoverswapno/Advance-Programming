#include <bits/stdc++.h>
using namespace std;

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
    int first=INT_MIN;
    int second=INT_MIN;
    int mx=*max_element(v.begin(),v.end());
    int mn=*min_element(v.begin(),v.end());
    for(int i=0;i<n;++i)
    {
      if(v[i]<mx&&v[i]>mn)
      {
        mn=v[i]; 
      }
    }
    cout<<mn<<endl;
    
    return 0;
}