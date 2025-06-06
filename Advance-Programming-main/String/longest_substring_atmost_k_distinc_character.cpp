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
   int startstring=0;
   int end=0;
    vector<int>hash(26,0);
    int distinct=0;
   for(int i=0;i<s.size();++i)
   {
    
          if(hash[s[i]-'a']==0)
          {
            distinct++;
          }
          hash[s[i]-'a']++;
           
          while(distinct>k)
          {
            hash[s[end]-'a']--;
            if(hash[s[end]-'a']==0)
            {
                distinct--;
            }
            end++;
          }
          int check=i-end+1;
          if(check>maxLen)
          {
            maxLen=check;
            startstring=end;

          }
        //   maxLen=max(maxLen,i-end+1);
      
   }

cout<<maxLen<<endl;
cout<<s.substr(startstring,maxLen)<<endl;

    return 0;
}