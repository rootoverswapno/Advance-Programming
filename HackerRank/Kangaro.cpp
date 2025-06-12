#include<bits/stdc++.h>
using namespace std;
void fastIO()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
}
string kangaroo(int x1, int v1, int x2, int v2) {

    if((x2-x1)%(v1-v2)==0&&v1!=v2&&((v1-v2)*(x2-x1))>0)
    {
        return "YES";
    }
    return "NO";   
}
int main()
{


fastIO();
int x1,v1,x2,v2;
cin>>x1>>v1>>x2>>v2;
string s=kangaroo(x1,v1,x2,v2);
cout<<s<<endl;


return 0;
}