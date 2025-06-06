#include <bits/stdc++.h>
using namespace std;
void bfs(int V,vector<int>&indegree,queue<int>&q,vector<int>&result,vector<vector<int>>&adj)
{
    for(int i=0;i<V;++i)
    {
       for( int u:adj[i])
       {
        indegree[u]++;
       }

    }

    for(int i=0;i<V;++i)
    {
        if(indegree[i]==0)
        {
            q.push(i);
        }
    }
    while(!q.empty())
    {
        int node=q.front();
        q.pop();
        result.push_back(node);

        for(int child:adj[node])
        {
            if(--indegree[child]==0)
            {
                q.push(child);
            }
        }
    }
    if(result.size()!=V)
    {
        cout<<"Cycle Detyected"<<endl;
        return;
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int V,E;
    cin>>V>>E;
    vector<vector<int>>adj(V);
    for(int i=0;i<E;++i)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
    }
    vector<int>indegree(V,0);
    queue<int>q;
    vector<int>result;
    bfs(V,indegree,q,result,adj);
   
    for(int num:result)
    {
        cout<<num<<" ";
    }
    cout<<endl;


    return 0;
}