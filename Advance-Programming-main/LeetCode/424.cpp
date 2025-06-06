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
   for(int i=0;i<s.size();++i)
   {
    int maxfrequency=0;
       vector<int>hash(26,0);
       for(int j=i;j<s.size();++j)
       {
          hash[s[j]-'A']++;
          maxfrequency=max(maxfrequency,hash[s[j]-'A']);
          int check=(j-i+1)-(maxfrequency);
          if(check<=k)
          {
              maxLen=max(maxLen,j-i+1);
          }
          else
          {
            break;
          }

       }
   }

cout<<maxLen<<endl;
    return 0;
}