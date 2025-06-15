#include<bits/stdc++.h>
using namespace std;
void primeFactorize(int n){
    vector<int>res;
    for(int i=2;i*i<=n;++i)
    {
        while (n%i==0)
        {
            res.push_back(i);
            n/=i;
        } 
    }
    if(n>1)res.push_back(n);

    for(int &num:res)
    {
        cout<<num<<" ";
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
primeFactorize(n);

return 0;
}