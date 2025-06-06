#include <bits/stdc++.h>
using namespace std;

void solve_by_Swapnomoy()
{
 int n;
 cin>>n;
 vector<int>v(n);
 int ct=1;
 for(auto &i:v)
 {
    cin>>i;
 }
 int last=-2;
 for(auto &i:v)
 {
    if(i>=last+2)
    {
        ct++;
        last=i;
    }
 }
 cout<<ct<<endl;
 
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

     int testcase;
     cin>>testcase;
while(testcase--)
{
     solve_by_Swapnomoy();
}
    return 0;
}