#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string input;
    cin>>input;
    string result="";
    for(char ch:input)
    {
        result+=ch;
        int len=result.size();
        while(len>=2&&result[len-2]=='W'&&result[len-1]=='A')
        {
            result[len-2]='A';
            result[len-1]='C';
            len--;
        }
        
    }
    cout<<result<<endl;
    
    return 0;
}