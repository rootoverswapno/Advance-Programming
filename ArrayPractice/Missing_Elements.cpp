#include <bits/stdc++.h>
using namespace std;

//using brute force approach
int miss(vector<int>&v,int n)
{
    // int n=v.size();
    
     for(int i=0;i<=n;++i)
     {
        int flag=0;
        for(int j=0;j<n-1;++j)
        {
            if(v[j]==i)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            return i;
        }      
     }

     return -1;
}

//using hashing approach
int missing(vector<int>&v,int n)
{
   vector<int>hash(n+1,0);
   for(int i=0;i<n-1;++i)
   {
      hash[v[i]]++;
   }
    for(int i=1;i<=n;++i)
    {
        if(hash[i]==0)
        {
            return i;
        }
    }
    return -1;
}

//using number theory approach
int nbrtheory(vector<int>&v,int n)
{
    int sum=accumulate(v.begin(),v.end(),0);

    int sum2=(n*(n+1))/2;
    return (sum2-sum);
}


//using bit manupulation approach
int bit(vector<int>&v,int n)
{
    int xor1=0,xor2=0;
    for(int i=0;i<v.size();++i)
    {
        xor1=xor1^v[i];
    }
    for(int i=1;i<=n;++i)
    {
        xor2=xor2^i;
    }
    return xor1^xor2;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n=5;
    vector<int>v={1,2,3,5};
    cout<<bit(v,n)<<endl;
    
    return 0;
}