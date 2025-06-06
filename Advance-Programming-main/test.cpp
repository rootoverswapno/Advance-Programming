#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    vector<int>v(n);
   for(auto &i:v)
   {
    cin>>i;
   }
   int gcd=v[0];
        for(int num:v)
        {
            gcd=__gcd(gcd,num);
        }
    cout << (gcd == 1 ? "True\n" : "False\n");
    return 0;
}