#include <bits/stdc++.h>
using namespace std;
#ifdef ONLINE_JUDGE
#define LOCAL_IO()
#else
#define LOCAL_IO()                    \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#endif
class Solution
{
public:
    int mySqrt(int n)
    {
        if (n < 2)
        {
            return n;
        }
        int low = 1;
        int high = n / 2;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            long long midsquared = mid * 1LL * mid;

            if (mid == midsquared)
            {
                return mid;
            }
            if (midsquared < n)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        return high;
    }
};
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    Solution obj;
    cout << "Enter a Number : ";
    int n;

    cin >> n;

    int result = obj.mySqrt(n);
    cout << "Integer square root of  " << n << " is " << result << endl;

    return 0;
}