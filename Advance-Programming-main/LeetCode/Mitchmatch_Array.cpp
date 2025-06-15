#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>v,int target)
    {
        int counter=0;
        for(int i=0;i<v.size()-1;++i)
            {
                if(v[i]!=target)
                {
                    v[i]=-v[i];
                    v[i+1]=-v[i+1];
                    counter++;
                }
            }

        return v[v.size()-1]==target?counter:INT_MAX;
    }

int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);

int n,k;
cin>>n>>k;
vector<int>v(n);
for(int &num:v)
{
    cin>>num;
}
if(solve(v,1)<=k||solve(v,-1)<=k)
{
    cout<<"TRUE"<<endl;
}
else
{
    cout<<"False"<<endl;
}
return 0;
}