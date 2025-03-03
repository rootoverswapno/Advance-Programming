#include <bits/stdc++.h>
using namespace std;

// Function to get the maximum total value in the knapsack
double fractionalKnapsack(int W, vector<pair<double, pair<int, int>>>& items, int n) {
    // Sorting items based on value/weight ratio in descending order
    sort(items.rbegin(), items.rend()); // Reverse order sorting (descending)

    double totalValue = 0.0; // Maximum value in knapsack
    int currentWeight = 0;   // Current weight in knapsack

    for (int i = 0; i < n; i++) {
        int value = items[i].second.first;
        int weight = items[i].second.second;

        // If item can fit completely, take it
        if (currentWeight + weight <= W) {
            currentWeight += weight;
            totalValue += value;
        } 
        // If item can't fit completely, take fraction
        else {
            int remain = W - currentWeight;
            totalValue += value * ((double)remain / weight);
            break; // Knapsack is full
        }
    }
    return totalValue;
}

int main() {
    int n = 3; // Number of items
    vector<pair<double, pair<int, int>>> items; // Stores {value/weight, {value, weight}}
    
    items.push_back({(double)60 / 10, {60, 10}});
    items.push_back({(double)100 / 20, {100, 20}});
    items.push_back({(double)120 / 30, {120, 30}});
    
    int W = 50; // Knapsack capacity

    cout << "Maximum value that can be obtained = " << fixed << setprecision(6) 
         << fractionalKnapsack(W, items, n) << endl;

    return 0;
}
