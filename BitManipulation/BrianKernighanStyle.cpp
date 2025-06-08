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

  while(number2>number1)
  {
    number2=number2&(number2-1);
  }
  cout<<number2<<endl;



return 0;
}