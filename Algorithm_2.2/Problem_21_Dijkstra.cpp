#include <bits/stdc++.h>
using namespace std;
vector<int>dijkstra(vector<vector<pair<int,int>>>&adj,int src)
{
    int n=adj.size();
    vector<int>distance(n,INT_MAX);
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    

    distance[src]=0;
    pq.push({0,src});

    while(!pq.empty())
    {
        int dis=pq.top().first;
        int node=pq.top().second;
        pq.pop();

        for(auto it:adj[node])
        {
            int edgenode=it.first;
            int edgeweight=it.second;

            if(dis+edgeweight<distance[edgenode])
            {
                distance[edgenode]=dis+edgeweight;
                pq.push({distance[edgenode],edgenode});
            }
        }
    }

    return distance;

}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

   int n,m;
   cin>>n>>m;
   
  vector<vector<pair<int,int>>>adj(n);
  for(int i=0;i<m;++i)
  {
    int u,v,w;
    cin>>u>>v>>w;
    u--;
    v--; 
    adj[u].push_back({v,w});
    adj[v].push_back({u,w});
  }

  cout<<"Enter Source : ";
  int source;
  cin>>source;
  source--;

  vector<int>res=dijkstra(adj,source);

  for(int num:res)
  {
    cout<<num<<" ";
  }
  cout<<endl;


    return 0;
}