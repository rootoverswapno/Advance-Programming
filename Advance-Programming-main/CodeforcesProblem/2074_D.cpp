#include <bits/stdc++.h>
using namespace std;

void solve_by_Swapnomoy() {
    int n, m;
    cin >> n >> m;
    
    vector<int> x(n), r(n);
    for (int i = 0; i < n; ++i) {
        cin >> x[i]; 
    } 
    
    for (int i = 0; i < n; ++i) {
        cin >> r[i]; 
    }

  
    const int of = 1e5; 
    vector<vector<bool>> vis(2 * of + 1, vector<bool>(2 * of + 1, false));
    int uc = 0;

    for (int i = 0; i < n; ++i) {
        int xc = x[i], rc = r[i];

        for (int dx = -rc; dx <= rc; ++dx) {
            int xp = xc + dx;
            int max_dy = sqrt(rc * rc - dx * dx);

            for (int dy = -max_dy; dy <= max_dy; ++dy) {
                int yp = dy;
                if (!vis[xp + of][yp + of]) {
                    vis[xp + of][yp + of] = true;
                    uc++;
                }
            }
        }
    }

    cout << uc << endl; 
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