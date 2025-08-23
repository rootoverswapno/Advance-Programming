#include <iostream>
#include <vector>
#include <set>
#include <climits>
using namespace std;
class Solution {
public:
    int totalFruit(vector<int>& arr) {
        int n = arr.size();
        int maxlen = INT_MIN;
        for (int i = 0; i < n; ++i) 
        {
            set<int> st;
            for (int j = i; j < n; ++j) {
                st.insert(arr[j]);
                if (st.size() <= 2) {
                    maxlen = max(maxlen, j - i + 1);
                } else {
                    break;
                }
            }
        }
        return maxlen;
    }
};
int main() {
    Solution sol;
    vector<int> fruits;

    int n;
    cout << "Enter number of fruits: ";
    cin >> n;

    cout << "Enter fruit types (as integers): ";
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        fruits.push_back(x);
    }

    int result = sol.totalFruit(fruits);
    cout << "Maximum number of fruits collected: " << result << endl;

    return 0;
}
