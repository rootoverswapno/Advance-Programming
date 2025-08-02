#include <bits/stdc++.h>
using namespace std;

// ✅ Recursive function with memoization
int recursive(int index, bool buy, int n, vector<int>& prices,
              vector<vector<vector<int>>>& dp, int used) {
    if (index == n || used == 0)
        return 0;

    if (dp[index][buy][used] != -1)
        return dp[index][buy][used];

    int total_prices = 0;

    if (buy) {
        int b = recursive(index + 1, !buy, n, prices, dp, used) - prices[index];
        int nb = recursive(index + 1, buy, n, prices, dp, used);
        total_prices = max(b, nb);
    } else {
        int s = recursive(index + 1, !buy, n, prices, dp, used - 1) + prices[index];
        int ns = recursive(index + 1, buy, n, prices, dp, used);
        total_prices = max(s, ns);
    }

    return dp[index][buy][used] = total_prices;
}

// ✅ Main logic wrapper
int maxProfit(vector<int>& prices) {
    int n = prices.size();
    int used = 2; // max 2 transactions allowed
    vector<vector<vector<int>>> dp(n, vector<vector<int>>(2, vector<int>(used + 1, -1)));
    return recursive(0, true, n, prices, dp, used);
}

// ✅ Complete main function
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    vector<int> prices(n);

    for (int i = 0; i < n; ++i) {
        cin >> prices[i];
    }

    cout << maxProfit(prices) << endl;
    return 0;
}
