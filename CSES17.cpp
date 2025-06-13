#include<bits/stdc++.h>
using namespace std;

bool isSafe(int row,int col,vector<string> &board,int n){
    if(board[row][col]=='*') return false; 
    //column
    for(int i=0;i<row;i++){
        if(board[i][col]=='Q') return false;
    }
    
    //upper left diagonal
    for(int i=row,j=col;i>=0 && j>=0;i--,j--){
        if(board[i][j]=='Q') return false;
    }
    
    //upper right diagonal
    for(int i=row,j=col;i>=0 && j<n;i--,j++){
        if(board[i][j]=='Q') return false;
    }
    return true;
}

void solve(int row,int &count,vector<string> &board,int n){
    if(row==n){
        count++;
        return;
    }

    for(int col=0;col<n;col++){
        if(isSafe(row,col,board,n)){
            board[row][col]='Q';
            solve(row+1,count,board,n);
            board[row][col]='.';
        }
    }
}

int main(){
    int n=8;
    vector<string> board(n);
    for(int i=0;i<n;i++) cin>>board[i];
    
    int count=0;
    solve(0,count,board,n);
    cout<<count;
    
    return 0;
}

