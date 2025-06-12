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

int t;
cin>>t;
while(t--)
{
     int n;
    cin >> n;
    vector<int> v(n);
    for (int &i : v) 
    {
        cin >> i;
    }
    unordered_map<int, int> mp;
    for (int i = 0; i < n; ++i) {
        mp[v[i]] = i;
    }

    int counter = 0;
    int cmt = 0;

    for (int i = 0; i < n; ++i) {
        cmt = max(cmt, mp[v[i]]);
        if (i == cmt) {
            counter++;
        }
    }

    cout << counter << endl;
}


return 0;
}