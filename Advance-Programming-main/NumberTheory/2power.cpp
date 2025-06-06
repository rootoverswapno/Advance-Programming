#include<bits/stdc++.h>
using namespace std;
void fastIO()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
}
 bool isPowerOfTwo(int n)
 {
     if(n==1)return true;
     if(n<0||n%2!=0)return false;
     int num=isPowerOfTwo(n/2);
     return num;

 }
int main()
{
fastIO();
int n;
cin>>n;
cout<<isPowerOfTwo(n)<<endl;



return 0;
}