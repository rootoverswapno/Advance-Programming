
#include <bits/stdc++.h>
using namespace std;
double frac(int wet,vector<pair<double,pair<int,int>>>&items,int n)
{
     sort(items.rbegin(),items.rend());
     double totalValue=0.0;
     int currentWeight=0;
     for(int i=0;i<n;++i)
     {
        int value=items[i].second.first;
        int weight=items[i].second.second;
        if(currentWeight+weight<=wet)
        {
            currentWeight+=weight;
            totalValue+=value;
        }
        else
        {
            int remain=wet-currentWeight;
            totalValue+=value*((double)remain/weight);
            break;
        }
    }
    return totalValue;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

   int n=3;
   vector<pair<double,pair<int,int>>>items;
   for(int i=0;i<n;++i)
   {
    int value,weight;
    cin>>value>>weight;
    items.push_back({(double)value/weight,{value,weight}});
   }
   
   int wet=50;
   cout<<frac(wet,items,n);
   
    return 0;
}