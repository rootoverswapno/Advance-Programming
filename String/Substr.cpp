#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

  string s1="no";
  string s2="myphonenoisno";
  int size1=s1.size();
  int size2=s2.size();
  for(int i=0;i<size2-size1+1;++i)
  {
    if(s2.substr(i,size1)==s1)
    {
        cout<<"fount at index "<<i<<"\n";
    }
    
  }

    return 0;
}