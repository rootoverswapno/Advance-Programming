#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

   vector<int>v={1,2,3,4,5};
   int mx=0;
    int sum=0;
   for(int start=0;start<5;++start)
   {
    for(int end=start;end<5;++end)
    {
         sum+=v[end];
            mx=max(sum,mx);
        // for(int i=start;i<=end;++i)
        // {
          
        
        //     cout<<v[i]<<" ";
        // }
        // cout<<endl;
        
    }
    
   }

   cout<<mx<<endl;



    return 0;
}