#include <bits/stdc++.h>
using namespace std;
bool safe(int n,vector<string>&board,int row,int col)
{
    for(int i=0;i<row;++i)
    {
        if(board[i][col]=='Q')
        {
            return false;
        }

    }
    for(int i=0;i<row;++i)
    {
        if(board[row][i]=='Q')
        {
            return false;
        }
        
    }

    for(int i=row,j=col;i>=0&&j>=0;i--,j--)
    {
        if (board[i][j] == 'Q') {
            return false;
        }
    }
     
    for(int i=row,j=col;i>=0&&j<n;i--,j++)
    {
        if (board[i][j] == 'Q') {
            return false;
        }
    }
    return true;

}
void solve(int n,vector<vector<string>>&result,vector<string>&board,int row)
{
    if(row==n)
    {
        result.push_back(board);
        return;
    }
    for(int col=0;col<n;col++)
    {
        if(safe(n,board,row,col))
        {
            board[row][col]='Q';
            solve(n,result,board,row+1);
            board[row][col]='.';
        }
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int n;
    cin>>n;
  

    vector<vector<string>>result;
    vector<string>board(n,string(n,'.'));
    solve(n,result,board,0);
    

    for(auto &i:result)
    {
        for(auto &j:i)
        {
            cout<<j<<endl;
        }
        cout<<endl;
    }

    return 0;
}