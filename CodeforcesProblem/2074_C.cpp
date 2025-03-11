#include <bits/stdc++.h>
using namespace std;

const int N = 1000; 
int dp[N + 1];

void precompute() {
    memset(dp, -1, sizeof(dp)); 
    for (int x = 1; x <= N; ++x) {
        for (int i = 1; i < x; ++i) {
            int xor_val = x ^ i;
            if (i + x > xor_val && i + xor_val > x && x + xor_val > i) {
                dp[x] = i;
                break; 
            }
        }
    }
}

void solve_by_Swapnomoy() {
    long long x;
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
