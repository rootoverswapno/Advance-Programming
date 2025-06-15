#include<bits/stdc++.h>
using namespace std;
vector<int>primeProduct;
void precompute()
{
    vector<int>primes={
        2, 3, 5, 7,
        11, 13, 17,
        19, 23, 29, 
        31, 37, 41, 
        43, 47, 53};
        int prod=1;
        for(int num:primes)
        {
            prod*=num;
            primeProduct.push_back(prod);
        }
}
int primecount(long long n)
{
    // int low=0;
    // int high=primeProduct.size();
    // while(low<high)
    // {
    //     int mid=(low+high)>>1;
    //     if(primeProduct[mid]<=n)
    //     {
    //         low=mid+1;
    //     }
    //     else
    //     {
    //         high=mid;
    //     }
    // }
    // return low;
    

    int count=upper_bound(primeProduct.begin(),primeProduct.end(),n)
    -primeProduct.begin();
    return count;
}

int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
precompute();
long long n;
cin>>n;
cout<<primecount(n)<<endl;




return 0;
}