#include <bits/stdc++.h>
using namespace std;
int timer=1;
void dfs(int node,int parent,vector<int>&vis,vector<int>adj[],
    int tin[],int low[], vector<vector<int>>&bridges)

{
    vis[node]=1;
    tin[node]=low[node]=timer;
    timer++;

    for(auto it:adj[node])
    {
        if(it==parent)continue;
        if(vis[it]==0)
        {
           dfs(it,node,vis,adj,tin,low,bridges);
           low[node]=min(low[node],low[it]);
           if(low[it]>tin[node])
           {
              bridges.push_back({it,node});
           }
        }
        else
        {    
            low[node]=min(low[node],low[it]);
        }
    }
}
vector<vector<int>>findBiconnectedComponents(int n,vector<int>adj[])
{
    vector<int>vis(n,0);
    int tin[n];
    int low[n];
    vector<vector<int>>bridges;
    dfs(0,-1,vis,adj,tin,low,bridges);
    return bridges;

}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n = 6; 
    vector<int> adj[n];
    adj[0] = {1, 3};
    adj[1] = {0, 2};
    adj[2] = {1, 3, 4};
    adj[3] = {0, 2};
    adj[4] = {2, 5};
    adj[5] = {4};
    vector<vector<int>>result= findBiconnectedComponents(n, adj);
     for(auto &i:result)
     {
        for(auto &j:i)
        {
            cout<<j<<" ";
        }
        cout<<endl;

     }

    return 0;
}
