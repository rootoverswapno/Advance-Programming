#include<bits/stdc++.h>
using namespace std;
void solve_by_rootover()
{
int n;
cin>>n;
vector<int>v(n);
for(int &num:v)
{
    cin>>num;
}
int counter=0;
set<int>curr,prev;
for(int num:v)
{
curr.insert(num);
prev.insert(num);
   if(curr.size()==prev.size())
   {
    counter++;
    prev.clear();
   }
}
cout<<counter<<endl;


}
int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
int testcase;
cin>>testcase;
for(int i=1;i<=testcase;++i)
{
solve_by_rootover();
}
return 0;
}