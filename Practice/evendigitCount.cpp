#include<bits/stdc++.h>
using namespace std;
void fastIO()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
}
int main()
{
fastIO();
int n;
cin>>n;
vector<int>v(n);
for(auto &i:v)
{
    cin>>i;
}
set<int>st;
int counter=0;
for(int i=0;i<n;++i)
{
    for(int j=0;j<n;++j)
    {
         for(int k=0;k<n;++k)
         {
            if(v[i]!=0&&i!=j&&j!=k&&i!=k){
                int num=v[i]*100+v[j]*10+v[k];
                if(num%2==0)
                {
                    st.insert(num);
                }

            }
            
         }
    }
}

cout<<st.size()<<endl;

return 0;
}