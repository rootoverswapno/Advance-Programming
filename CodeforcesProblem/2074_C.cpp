#include <bits/stdc++.h>
using namespace std;
const int N = 1000; 
int dp[N + 1];
void precompute() {
    memset(dp, -1, sizeof(dp)); 
    for (int x = 1; x <= N; ++x) {
        int i = x ^ (x - 1);
        if (i < x) {
            dp[x] = i;
        } else {
            dp[x] = 1;
        }
    }
}

void solve_by_Swapnomoy() {
    int x;
    cin >> x;
    cout << dp[x] << endl; 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    precompute(); 
    int testcase;
    cin >> testcase;
    while (testcase--) {
        solve_by_Swapnomoy();
    }
    return 0;
}