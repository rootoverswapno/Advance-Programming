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

int s,t,a,b;
cin>>s>>t>>a>>b;
int n,m;
cin>>n>>m;
vector<int>apples(n);
vector<int> oranges(m);
for(auto &i:apples)
{   
    cin>>i;
}
for(auto &i:oranges)
{
    cin>>i;
}

int counter=0;
for(auto &num:apples)
{
    num+=a;
    if(num>=s&&num<=t)
    {
        counter++;
    }
}
int counter1=0;
for(auto &num:oranges)
{
    num+=b;
     if(num>=s&&num<=t)
    {
        counter1++;
    }
}

cout<<counter<<endl<<counter1<<endl;




return 0;
}