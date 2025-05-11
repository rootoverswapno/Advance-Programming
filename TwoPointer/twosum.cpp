#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for (auto &num : v)
    {
        cin >> num;
    }
    sort(v.begin(), v.end());
    int i = 0;
    int j = v.size() - 1;
    int sum;

    while (i < j)
    {
        sum = v[i] + v[j];
        if (sum == x)
        {
            cout << v[i] << " " << v[j] << endl;
            break;
        }
        if (sum < x)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    cout<<"IMPOSSIBLE"<<endl;

    return 0;
}