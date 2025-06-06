#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string str;
    cin>>str;
    string result="";

    for(int i=0;i<str.size();++i)
    {
        if(str[i]=='2')result+=str[i];
    }
    cout<<result<<endl;
    
    return 0;
}