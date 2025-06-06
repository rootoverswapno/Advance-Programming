#include<bits/stdc++.h>
using namespace std;
void fastIO()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
}
int main()
{
fastIO();

map<string,int>mp={
    {"appale",5},
    {"banana",2},
    {"cherry",8},
    {"date",3}
};
vector<pair<string,int>>vec(mp.begin(),mp.end());
sort(vec.begin(),vec.end(),[](auto &a,auto &b)
{
    return a.second<b.second;
});
for(auto &pair:vec)
{
    cout<<pair.first<<" "<<pair.second<<"\n";
}


return 0;
}