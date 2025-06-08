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
  int number1;
  int number2;
  cin>>number1>>number2;


//Native Approach
//   int x=number1;
//   for(int i=number1+1;i<=number2;++i)
//   {
//     x=x&i;
//   }
//   cout<<x<<endl;


//Optimize Approach Bit Manipulation
  int counter=0;
  while(number1!=number2)
  {
    number1=number1>>1;
    number2=number2>>1;
    counter++;
  }
  cout<<(number2<<counter)<<endl;


return 0;
}