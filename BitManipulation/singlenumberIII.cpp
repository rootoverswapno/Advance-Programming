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
  int x=0;
   vector<int>v(n);
   for(auto &i:v)
   {
    cin>>i;
    x^=i;
   }
   int a=0;
   int bitDifference=x&-x;
   for(int num:v)
   {
       if(num&bitDifference)
       {
           a^=num;
       }
   }

   int b=a^x;

   cout<<a<<" "<<b<<endl;
   



return 0;
}