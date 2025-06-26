#include <bits/stdc++.h>
using namespace std;
#define Rootover_Swapno_Code_Show
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= sqrt(n); ++i)
    {
        if (n % i == 0)
        {
            cout << i << endl;
            sum = sum + i;
            if (i != n / i)
            {
                cout << n / i << endl;
                sum = sum + n / i;
            }
        }
    }
    cout << sum << endl;

    return 0;
}