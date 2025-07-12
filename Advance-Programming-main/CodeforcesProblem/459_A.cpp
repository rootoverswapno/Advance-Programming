#include<bits/stdc++.h>
using namespace std;
#define Rootover_Swapno_Code_Show
#ifdef ONLINE_JUDGE
#define LOCAL_IO()
#else
#define LOCAL_IO() freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#endif

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    LOCAL_IO();
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    if(x1==x2)
    {
        int dis=abs(y1-y2);
        cout<<dis+x1<<" "<<y1<<" "<<x2+dis<<" "<<y2<<endl;
        return 0;
    }
    else if(y1==y2)
    {
         int dis=abs(x1-x2);
        cout<<x1<<" "<<dis+y1<<" "<<x2<<" "<<dis+y2<<endl;
        return 0;
    }
    else if(abs(x1-x2)==abs(y1-y2))
    {
        cout<<x2<<" "<<y1<<" "<<x1<<" "<<y2<<endl;
        return 0;
    }
    else{
        cout<<-1<<endl;
    }
    




    return 0;
}