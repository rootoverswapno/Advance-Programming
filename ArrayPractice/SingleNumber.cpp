#include <bits/stdc++.h>
using namespace std;

//brute force
int find(vector<int>&v)
{
    int n=v.size();
    for(int i=0;i<n;++i)
    {
        int el=v[i];
        int ct=0;
        for(int j=0;j<n;++j)
        {
            if(v[j]==el)ct++;
        }
        if(ct==1)return el;
    }
    return -1;
}
//using map
int find1(vector<int>&v)
{
    int n=v.size();
   map<int,int>mp;
   for(int num:v)
   {
    mp[num]++;
   }
   for(auto &i:mp)
   {
    if(i.second==1){
        return i.first;
    }
   }
   return -1;
}

//using bit masking

int find2(vector<int>&v)
{
    int n=v.size();
    int x=0;
    for(int i=0;i<n;++i)
    {
       x=x^v[i];
    }
    return x;
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
 cout<<find2(v)<<endl;
    
    return 0;
}