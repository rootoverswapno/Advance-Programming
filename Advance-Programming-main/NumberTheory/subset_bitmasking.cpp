#include <bits/stdc++.h>
using namespace std;
 vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
    int total_subset=(1<<n);
    vector<vector<int>>res;
    for(int mask=0;mask<total_subset;++mask)
    {
        vector<int>subset;
        for(int i=0;i<n;++i)
        {
            if((mask&(1<<i))!=0)
            {
                subset.push_back(nums[i]);
            }
        }
        res.push_back(subset);
    }
    return res;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    vector<int>nums(n);
    for(int &num:nums)
    {
        cin>>num;
    }

    auto subset_el=subsets(nums);
    for(auto sub:subset_el)
    {
        for(auto num:sub)
        {
            cout<<num<<" ";
        }
        cout<<endl;
    }



    return 0;
}