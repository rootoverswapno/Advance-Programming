#include <bits/stdc++.h>
using namespace std;
int partion(vector<int>&v,int low,int high)
{
    int i=low;
    int j=high;
    int pi=v[low];
    while(i<j)
    {
        while(i<high&&v[i]<=pi)i++;
        while(j>low&&v[j]>=pi)j--;
        if(i<j)
        {
            swap(v[i],v[j]);
        }
    }
    swap(v[low],v[j]);
    return j;
}
void quicksort(vector<int>&v,int low,int high){
    if(low<high)
    {
        int pi=partion(v,low,high);
        quicksort(v,low,pi);
        quicksort(v,pi+1,high);
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    vector<int>v(n);
    for(auto &i:v)
    {
        cin>>i;
    }
    quicksort(v,0,n-1);
   for(auto &i:v)
   {
    cout<<i<<" ";
   }
   cout<<endl;



    return 0;
}