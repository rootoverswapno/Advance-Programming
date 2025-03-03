#include <bits/stdc++.h>
using namespace std;
void heapify(vector<int>&v,int n,int i)
{
    // int n=v.size();
    int largest=i;
    int left=2*i+1;
    int right=2*i+2;
    
    //check if left child is greater then root
    if(left<n&&v[left]<v[largest])
    {
        largest=left;
    }

    //check if right child is greater then root

    if(right<n&&v[right]<v[largest])
    {
        largest=right;
    }

    if(largest!=i)
    {
        swap(v[largest],v[i]);
        heapify(v,n,largest);

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
void HeapifyUp(vector<int>&v,int i)
{
    int parent=(i-1)/2;
    while(i>0&&v[i]<v[parent])
    {
        swap(v[i],v[parent]);
        i=parent;
        parent=(i-1)/2;
    }
}
void insert(vector<int>&v,int value)
{
    v.push_back(value);
    HeapifyUp(v,v.size()-1);
}
void heapsort(vector<int>&v)
{
    int n=v.size();
    buildheap(v);

    for(int i=n-1;i>0;--i)
    {
        swap(v[0],v[i]);
        heapify(v,i,0);
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

    buildheap(v);

    cout<<endl<<endl;

    
    for( int num:v)
    {
        cout<<num<<" ";
    }
    cout<<endl;
    insert(v,3);

    for( int num:v)
    {
        cout<<num<<" ";
    }

    return 0;
}