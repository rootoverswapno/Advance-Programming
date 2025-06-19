#include<bits/stdc++.h>
using namespace std;
void compute(int num,vector<long long>&res){
   int carry=0;
   for(int i=0;i<res.size();++i)
   {
    int prod=res[i]*num+carry;
    res[i]=prod%10;
    carry=prod/10;
   }
   while(carry)
   {
    res.push_back(carry%10);
    carry/=10;
   }
}
void factorial(int n)
{
   vector<long long>res={1};
   for(int i=2;i<=n;++i){
    compute(i,res);
   }

   for(int i=res.size()-1;i>=0;--i)
   {
    cout<<res[i];
   }
   cout<<endl;
}
int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);

int n;
cin>>n;
factorial(n);


return 0;
}