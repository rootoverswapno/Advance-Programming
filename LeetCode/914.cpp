#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    vector<int>v(n);
    for(int &num:v)
    {
        cin>>num;
    }
    unordered_map<int,int>mp;
    for(int i:v)
    {
        mp[i]++;
    }
    bool check=true;
    for(auto i:mp)
    {
        if(i.second%2!=0)
        {
            check=false;
            break;
        }
    }
    cout<<check<<endl;



    return 0;
}