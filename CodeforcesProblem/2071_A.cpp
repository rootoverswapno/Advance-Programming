#include <bits/stdc++.h>
using namespace std;

void solve_by_Swapnomoy()
{
    int k;
    cin>>k;
    vector<int>v={0,1,2};
    int spectates=2;
    for(int i=1;i<k;++i)
    {
       int player1=v[0];
       int palyer2=v[1];

       int win=player1;
       int loss=palyer2;

       v[0]=win;
       v[1]=spectates;
       spectates=loss;

    }
    if(spectates==2)
    {
        cout<<"YES"<<endl;
        return;
    }
    else
    {
        cout<<"NO"<<endl;
        return;
    }
 
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

     int testcase;
     cin>>testcase;
while(testcase--)
{
     solve_by_Swapnomoy();
}
    return 0;
}