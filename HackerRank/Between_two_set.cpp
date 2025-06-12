#include<bits/stdc++.h>
using namespace std;
void fastIO()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
}

int getTotalX(vector<int>a, vector<int>b) {
int arr1_lcm=a[0];
for(int num:a)
{
    arr1_lcm=lcm(num,arr1_lcm);
}
int arr2_gcd=b[0];
for(int num:b)
{
arr2_gcd=__gcd(arr2_gcd,num);
}
int counter=0;
for(int i=arr1_lcm;i<=arr2_gcd;i+=arr1_lcm)
{
    if(arr2_gcd%i==0)
    {
        counter++;
    }
}

return counter;

}
int main()
{
fastIO();
int n,m;
cin>>n>>m;
vector<int>v(n);
vector<int>vv(m);
for(int &num:v)
{
    cin>>num;
}
for(int &num:vv)
{
    cin>>num;
}
cout<<getTotalX(v,vv)<<endl;


return 0;
}