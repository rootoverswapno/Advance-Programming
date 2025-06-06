#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int num;
    cin>>num;
    string result="";
    vector<string>vs={"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
    vector<int>number={1,4,5,9,10,40,50,90,100,400,500,900,1000};
    for(int i=number.size()-1;num>0;--i)
    {
        while(num>=number[i])
        {
           result+=vs[i];
           num-=number[i];
        }
    }

   cout<<result<<endl;


    return 0;
}