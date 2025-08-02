#include <bits/stdc++.h>
using namespace std;

//  Recursive function with memoization
int recursive(int index, bool buy, int n, vector<int>& prices, vector<vector<int>>& dp)
{
    if (index == n) return 0;

    if (dp[index][buy] != -1)
        return dp[index][buy];

    int total_prices = 0;

    if (buy) {
        int b = recursive(index + 1, !buy, n, prices, dp) - prices[index]; // Buy
        int nb = recursive(index + 1, buy, n, prices, dp); // Skip
        total_prices = max(b, nb);
    } else {
        int s = recursive(index + 1, !buy, n, prices, dp) + prices[index]; // Sell
        int ns = recursive(index + 1, buy, n, prices, dp); // Skip
        total_prices = max(s, ns);
    }

    return dp[index][buy] = total_prices;
}

// Wrapper function
int maxProfit(vector<int>& prices) {
    int n = prices.size();
    vector<vector<int>> dp(n, vector<int>(2, -1));
    return recursive(0, true, n, prices, dp);
}

// Complete main function
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    vector<int> prices(n);

    for (int i = 0; i < n; ++i)
        cin >> prices[i];

    cout << maxProfit(prices) << endl;
    return 0;
}
