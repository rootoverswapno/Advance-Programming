#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vr vector<ll>arr
#define vp push_back
const int N=1e9+7;
#ifdef ONLINE_JUDGE
#define LOCAL_IO()
#else
#define LOCAL_IO() freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#endif

void solve_by_rootover()
{
    // vector<int>hash(26,0);
    // string alphabet = "abcdefghijklmnopqrstuvwxyz";
    // for(int i=0;i<26;++i)
    // {
    //    hash[i]=alphabet[i]-'a'+1;
    // }
   string s;
   cin>>s;
   int p;
   cin>>p;

   ll sum=0;
  map<char,int>mp;
  for( char &i:s)
  {
    mp[i]++;
    sum+=i-'a'+1;
  }
   if(p>=sum)
   {
    cout<<s<<endl;
    return;
   }
   for(char ch='z';ch>='a';ch--)
   
   {
    int value=ch-'a'+1;
    while(p<sum&&mp[ch]>0)
    {
        mp[ch]--;
        sum-=value;
    }
   }
    map<char,int>res;
    for(char ch='a';ch<='z';ch++)
    {
        res[ch]=mp[ch];
    }
    string rs="";
   for(auto ch:s)
   {
    if(res[ch]>0)
    {
      rs+=ch;
      res[ch]--;
    }
   }
   cout<<rs<<endl;
  
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    LOCAL_IO();
    int testcase;
    cin >> testcase;
    for(int i = 1; i <= testcase; ++i)
    {
        solve_by_rootover();
    }
    return 0;
}