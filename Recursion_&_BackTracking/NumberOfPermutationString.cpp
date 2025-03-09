#include <bits/stdc++.h>
using namespace std;
void getPermutation(string &str,int ind,vector<string>&result)
{
    if(ind==str.size())
    {
        result.push_back(str);
        return;
    }
    for(int i=ind;i<str.size();++i)
    {
        swap(str[ind],str[i]);
        getPermutation(str,ind+1,result);
        swap(str[ind],str[i]);
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;
    vector<string>result;
    getPermutation(s,0,result);

  for(auto &st:result)
  {
    cout<<st<<endl;
  }



    return 0;
}