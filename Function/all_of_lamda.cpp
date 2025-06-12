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

vector<int>v={-1,2,3};
//all element are greater then 0  return true else false
cout<<all_of(v.begin(),v.end(),
[](int x){return x>0;})<<endl;

//no element are greater then 0 return true else false
cout<<none_of(v.begin(),v.end(),
[](int x){return x>0;})<<endl;

//at least 1 element are greater then 0 return true else false
cout<<any_of(v.begin(),v.end(),
[](int x){return x>0;})<<endl;

//any element satisfy the condition to find it
auto it=find_if(v.begin(),v.end(),
[](int x){return x>0;});
cout<<"Position is : "<<*it<<endl;

//all satisfy element count function
int counter=count_if(v.begin(),v.end(),
[](int x){return x>0;});
cout<<counter<<endl;


return 0;
}