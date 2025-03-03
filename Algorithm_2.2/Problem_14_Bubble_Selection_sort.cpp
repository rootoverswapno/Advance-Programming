#include <bits/stdc++.h>
using namespace std;
void bubblesort(vector<int>&v)
{
    int n=v.size();
    for(int i=0;i<n-1;++i)
    {
        for(int j=0;j<n-i-1;++j)
        {
            if(v[j]>v[j+1])
            {
                swap(v[j],v[j+1]);
            }
        }
    }
}
void insertion(vector<int>&v)
{
    int n=v.size();
    for(int i=1;i<n;++i)
    {
        int temp=v[i];
        int j=i-1;
        while(j>=0&&v[j]>temp)
        {
            v[j+1]=v[j];
            j--;
        }
        v[j+1]=temp;
    }
    
}
void selection(vector<int>&v)
{
    int n=v.size();
    for(int i=0;i<n-1;++i)
    {
        int minindex=i;
        for(int j=i+1;j<n;++j)
        {
            if(v[j]<v[minindex])
            {
                minindex=j;
            }
        }
        if(minindex!=i)
        {
            swap(v[i],v[minindex]);
        }
    }
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
   
//    bubblesort(v);
//    insertion(v);
   selection(v);
   for(int num:v)
   {
    cout<<num<<" ";
   }
   
    
    return 0;
}