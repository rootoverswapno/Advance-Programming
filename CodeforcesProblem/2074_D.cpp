#include <bits/stdc++.h>
using namespace std;
void solve_by_Swapnomoy() {
    int n, m;
    cin >> n >> m;
    
    vector<int> x(n), r(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> x[i]; 
    } 
    
    for (int i = 0; i < n; ++i) 
    {
        cin >> r[i]; 
    }
    set<pair<int, int>> lp; 

    for (int i = 0; i < n; ++i) {
        int xc = x[i], rc = r[i];

        for (int dx = -rc; dx <= rc; ++dx) { 
            int xp = xc + dx;
            int my = floor(sqrt(rc * rc - dx * dx)); 

            for (int dy = -my; dy <= my; ++dy) {
                lp.insert({xp, dy});
            }
        }
    }

    cout << lp.size() << endl; 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testcase;
    cin >> testcase;
    while (testcase--) {
        solve_by_Swapnomoy();
    }
    return 0;
}
