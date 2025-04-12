#include <bits/stdc++.h>
using namespace std;
void countSort(vector<int>&v,int n,int exp)
{
    vector<int>output(n);
    vector<int>count(10,0);
    for(int i=0;i<n;++i)
    {
        count[(v[i]/exp)%10]++;
    }
    for(int i=1;i<10;++i)
    {
        count[i]+=count[i-1];
    }
    for(int i=n-1;i>=0;--i)
    {
        output[count[(v[i]/exp)%10]-1]=v[i];
        count[(v[i]/exp)%10]--;
    }
    for(int i=0;i<n;++i)
    {
        v[i]=output[i];
    }
}
void radixsort(vector<int>&v,int n){
    int mx=*max_element(v.begin(),v.end());

    for(int exp=1;mx/exp>0;exp*=10)
    {
        countSort(v,n,exp);
    }
}
void print(vector<int>&v,int size)
{
    for(int i=0;i<size;++i)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
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
   radixsort(v,n);
   print(v,n);

    return 0;
}