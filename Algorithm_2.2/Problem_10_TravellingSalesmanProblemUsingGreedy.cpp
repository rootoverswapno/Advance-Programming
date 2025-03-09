#include <bits/stdc++.h>
using namespace std;
int tsp(vector<vector<int>>graph){
    int numberNodes=graph.size();
    vector<int>vertex;
    for(int i=1;i<numberNodes;++i)
    {
        vertex.push_back(i);
    }
  int minCost=INT_MAX;
   do{
     int currcost=0;
     int currnode=0;
     for(int i=0;i<vertex.size();++i)
     {
        currcost+=graph[currnode][vertex[i]];
        currnode=vertex[i];
     }
     currcost+=graph[currnode][0];
     minCost=min(minCost,currcost);

   }while(next_permutation(vertex.begin(),vertex.end()));
   return minCost;


}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<vector<int>>graph={{0, 10, 15, 20}, 
    {10, 0, 35, 25}, 
    {15, 35, 0, 30}, 
    {20, 25, 30, 0}};

    int res=tsp(graph);
    cout<<res<<endl;

    return 0;
}