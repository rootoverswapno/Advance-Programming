#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;
    int hash[256]={0};
    //int hash[26]={0};
    for(int i=0;i<s.size();++i)
    {
        hash[(s[i])]++;
        //hash[(s[i]-'a)]++;
    }
    int q;
    cin>>q;
    while(q--)
    {
        char c;
        cin>>c;
        cout<<hash[c]<<endl;
        //cout<<hash[c-'a']<<endl;
    }




    return 0;
}