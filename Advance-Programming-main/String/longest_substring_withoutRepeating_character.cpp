#include <bits/stdc++.h>
using namespace std;
pair<int,string>sp(string &s)
{
       int end=0;
   int start=0;
   int maxlen=0;
   int maxstart=0;
   unordered_set<char>st;
   for(int i=end;i<s.size();++i)
   {
        while(st.find(s[i])!=st.end())
        {
            st.erase(s[i]);
            end++;
        }
        st.insert(s[i]);

        if(maxlen<i-end+1)
        {
            maxlen=i-end+1;
            maxstart=end;
        }
        // maxlen=max(maxlen,i-end+1);
   }
   return {maxlen,s.substr(maxstart,maxlen)};

}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

   string s;
   cin>>s;

   

auto [maxlen,maxstring]=sp(s);
  cout<<maxlen<<endl;
  cout<<maxstring<<endl;
    return 0;
}