#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,x;
    cin>>n>>x;
   vector<int>v(n);
   for(auto &num:v)
   {
    cin>>num;
   }
   sort(v.begin(),v.end());
   
   int i=0;
   int j=v.size()-1;
   int sum=0;
  
   while(i<j)
   {
    sum=v[i]+v[j];
    if(sum==x)
    {
        cout<<v[i]<<" "<<v[j]<<endl;
        break;
    }
    if(sum<x)
    {
       i++;
    }
    else{
        j--;
    }
   }

//    for(int i=0;i<v.size()-1;++i)
//    {
//     for(int j=i+1;j<v.size();++j)
//     {
//         if(v[i]+v[j]==x)
//         {
//             cout<<v[i]<<" "<<v[j]<<endl;
//             break;
//         }

//     }
//    }




    return 0;
}