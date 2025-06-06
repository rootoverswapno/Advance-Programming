#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   int n;
   cin>>n;
   vector<string>v(n);
   for(auto &i:v)
   {
    cin>>i;
   }
   sort(v.begin(),v.end(),[](string &a,string &b){
    return a.size()<b.size();
   });
   for(auto &i:v)
   {
    cout<<i;
   }
   cout<<endl;
    
    return 0;
}