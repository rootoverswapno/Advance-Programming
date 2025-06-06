#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;++i)
{
    cin>>arr[i];
}

int target;
cin>>target;
   int right=0;
   int left=0;
   int sum=arr[0];
   int len=0;
   while(right<n)
   {

      while(left<=right&&sum>target)
      {
        sum-=arr[left];
        left++;
      }
      if(sum==target)
      {
       len=max(len,right-left+1);
      }

      right++;
      if(right<n)
      {
        sum+=arr[right];
      }
   }
  cout<<len<<endl;


    return 0;
}