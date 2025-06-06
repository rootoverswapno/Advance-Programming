#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


   string s;
   cin>>s;
   int k;
   cin>>k;
   int maxLen=0;
   int maxfrequency=0;
   int end=0;
    vector<int>hash(26,0);
   for(int i=0;i<s.size();++i)
   {
      
      

          hash[s[i]-'A']++;
          maxfrequency=max(maxfrequency,hash[s[i]-'A']);
          
          while((i-end+1)-(maxfrequency)>k)
          {
            hash[s[end]-'A']--;
            end++;
          }
          maxLen=max(maxLen,i-end+1);
      
   }

cout<<maxLen<<endl;
    return 0;
}