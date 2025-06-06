#include<bits/stdc++.h>
using namespace std;
void fastIO()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
}
string convert24(string &s)
{
    string period=s.substr(8,2);
    int hour=stoi(s.substr(0,2));
    string minit=s.substr(3,2);
    string second =s.substr(6,2);
    if(period=="AM")
    {
        if(hour==12)hour=0;
    }
    else
    {
        if(hour!=12)hour+=12;
    }

    string result=(hour<10?"0":"")+to_string(hour);
    return result+":"+minit+":"+second;
}
int main()
{
fastIO();
string s;
cin>>s;
string res=convert24(s);
cout<<res<<endl;



return 0;
}