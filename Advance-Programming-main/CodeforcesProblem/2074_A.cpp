#include <bits/stdc++.h>
using namespace std;

void solve_by_Swapnomoy()
{
  int l,r,d,u;
  cin>>l>>r>>d>>u;
  if(abs(l)==abs(r)&&abs(r)==abs(d)&&abs(d)==abs(u))
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