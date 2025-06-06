#include <bits/stdc++.h>
using namespace std;
int tsp(vector<vector<int>>&cost)
{
    int numberNodes=cost.size();
    vector<int>nodes;
    for(int i=1;i<numberNodes;++i)
    {
        nodes.push_back(i);
    }

    int minCost=INT_MAX;
    do{
        int currCost=0;
        int currNode=0;
        for(int i=0;i<nodes.size();++i)
        {
            currCost+=cost[currNode][nodes[i]];
            currNode=nodes[i];
        }
        currCost+=cost[currNode][0];
        minCost=min(minCost,currCost);
    }while(next_permutation(nodes.begin(),nodes.end()));

    return minCost;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   vector<vector<int>>cost={{0, 10, 15, 20}, 
                            {10, 0, 35, 25}, 
                            {15, 35, 0, 30}, 
                            {20, 25, 30, 0}};
   

    int total=tsp(cost);
    cout<<total<<endl;



    return 0;
}