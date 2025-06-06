#include <bits/stdc++.h>
using namespace std;
void merge(vector<int>&v,int lo,int mid,int hi)
{
    int ind1=lo;
    int ind2=mid+1;
    int x=0;
    vector<int>res;
    while(ind1<=mid&&ind2<=hi)
    {
        if(v[ind1]<=v[ind2])
        res.push_back(v[ind1++]);
        else
        res.push_back(v[ind2++]); 
    }
    while(ind1<=mid)
    {
        res.push_back(v[ind1++]);
    }
    while(ind2<=hi)
    {
        res.push_back(v[ind2++]);
    }

    for(int i=0,j=lo;i<res.size();++i,++j)
    {
        v[j]=res[i];
    }
}
void mergesort(vector<int>&v,int lo,int hi)
{
    if(lo>=hi)
    return;

    int mid=lo+(hi-lo)/2;

    mergesort(v,lo,mid);
    mergesort(v,mid+1,hi);
    merge(v,lo,mid,hi);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   int n;
   cin>>n;
   vector<int>v(n);
   for(int &num:v)
   {
    cin>>num;
   }
   mergesort(v,0,n-1);
   for(int num:v)
   {
    cout<<num<<" ";
   }
   cout<<endl;
    return 0;
}