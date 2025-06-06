#include <bits/stdc++.h>
using namespace std;
void dfs(int node,vector<vector<int>>&adj,vector<bool>&vis,stack<int>&st)
{
    vis[node]=true;
    for(int child:adj[node])
    {
      if(!vis[child])
      {
        dfs(child,adj,vis,st);
      }
    }
    st.push(node);
}
void topologicalsort(int ver,
    vector<vector<int>>&adj,
    vector<bool>&vis,stack<int>&st)
{
    for(int i=0;i<ver;++i)
    {
        if(!vis[i])
        {
           dfs(i,adj,vis,st);
        }
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // 
    cout<<"Enter Number Of vertices and Edges : ";
  int V,e;
  
  cin>>V>>e;
  cout<<endl;
//   cout<<"Enter Edges : "<<endl;
  vector<vector<int>>adj(V);
  for(int i=0;i<e;++i)
  {

    int v,u;
    cin>>v>>u;
    adj[v].push_back(u);
  }
  vector<bool>vis(V,false);
  stack<int>st;
 topologicalsort(V,adj,vis,st);
 vector<int>res;
 while(!st.empty())
 {
    res.push_back(st.top());
    st.pop();
 }

 cout<<"TopoLogical Order :";
 for(auto num:res)
 {
    cout<<num<<" ";
 }
 cout<<endl;

    return 0;
}