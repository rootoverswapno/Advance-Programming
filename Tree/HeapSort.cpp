#include <bits/stdc++.h>
using namespace std;
void heapify(vector<int>&v,int n,int i)
{
    int latest=i;
    int left=2*i+1;
    int right=2*i+2;

    if(left<n&&v[left]>v[latest])
    {
        latest=left;
    }
    if(right<n&&v[right]>v[latest])
    {
        latest=right;
    }
     
    if(latest!=i)
    {
        swap(v[i],v[latest]);
        heapify(v,n,latest);
    }
}
void buildheap(vector<int>&v)
{
    int n=v.size();
    for(int i=(n/2)-1;i>=0;--i)
    {
      heapify(v,n,i);
    }
}
void heapsort(vector<int>&v)
{
    int n=v.size();
    for(int i=n-1;i>0;--i)
    {
        swap(v[0],v[i]);
        heapify(v,i,0);
    }
}
void printheap(vector<int>&v){
    for(int num:v)
    {
      cout<<num<<" ";
    }
    cout<<endl<<endl;
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
    printheap(v);
    buildheap(v);
    printheap(v);
    heapsort(v);
    printheap(v);



    return 0;
}