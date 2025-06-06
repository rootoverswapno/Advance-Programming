#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


int n;
cin>>n;
 int arr[n+1];
for(int i=1;i<=n;++i)
{
    cin>>arr[i];
}
int hash[10]={0};
for(int i=1;i<=n;++i)
{
    hash[arr[i]]++;
}
int q;
cin>>q;
while(q--)
{
    int num;
    cin>>num;
    cout<<hash[num]<<endl;
}
    return 0;
}