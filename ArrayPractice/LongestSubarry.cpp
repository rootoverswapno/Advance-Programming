#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

int arr[5];
for(int i=0;i<5;++i)
{
    cin>>arr[i];
}
for(int i=0;i<5;++i)
{
    for(int j=i;j<5;++j)
    {
        for(int k=i;k<=j;++k)
        {
            cout<<arr[k]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}



    return 0;
}