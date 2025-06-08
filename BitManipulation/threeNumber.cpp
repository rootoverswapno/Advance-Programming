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
int n;
cin>>n;
vector<int>v(n);
for(int &num:v)
{
    cin>>num;
}
int one=0;
int three=0;
for(int num:v)
{
    one=(one^num)&~three;
    three=(three^num)&~one;
}

cout<<one<<endl;


return 0;
}