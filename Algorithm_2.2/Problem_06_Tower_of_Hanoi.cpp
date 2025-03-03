#include <bits/stdc++.h>
using namespace std;
void toh(int n,char src,char aux,char dest)
{
   
    if(n==1)
    {
        cout<<"Move disk 1 from "<<src<<" To "<<dest<<endl;
        return;
    }
    toh(n-1,'A','C','B');
    cout<<"Move disk "<<n<< " from "<<src<<" To "<<dest<<endl;
    toh(n-1,'B','A','C');
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
int n;
cin>>n;
toh(n,'A','B','C');
    
    return 0;
}