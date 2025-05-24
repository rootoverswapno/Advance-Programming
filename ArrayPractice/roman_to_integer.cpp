#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    unordered_map<char,int>mp{
      {'I',1},{'V',5},{'X',10},{'L',50},
      {'C',100},{'D',500},{'M',1000}   
    };
    

    string s;
    cin>>s;
    int total=0;
    int prev=0;
    for(int i=s.size()-1;i>=0;--i)
    {
        int curr=mp[s[i]];
        if(curr<prev)
        {
            total-=curr;
        }
        else
        {
            total+=curr;
        }
        prev=curr;
    }

    cout<<total<<endl;

    return 0;
}