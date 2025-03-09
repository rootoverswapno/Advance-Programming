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
int len=0;
for(int i=0;i<n;++i)
{
    int sum=0;
    for(int j=i;j<n;++j)
    {
        sum+=arr[j];
        if(sum==target)
        {
          len=max(len,(j-i+1));
        }
    }
}
cout<<len<<endl;



    return 0;
}