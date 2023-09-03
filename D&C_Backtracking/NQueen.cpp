#include<iostream>
#include<vector>
using namespace std;
void printsolution(vector<vector<int>>& board, int n){
    for(int i=0; i<n; i++){
        for(int j = 0; j<n; j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<endl;
}
bool issafe(int row, int col, vector<vector<int>>& board, int n){
    // can we place queen or not?
    // check 3 direction upper left, bottom left, left
    int i =row;
    int j = col;
    // left row checking
    while(j>=0){
        if(board[i][j]==1){
            return false;
        }
        j--;
    }
    // bottom left
    i = row;
    j = col;
    while(i<n && j>=0){
        if(board[i][j]==1){
            return false;
        }
        i++;
        j--;
    }
    // upper left
    i= row;
    j = col;
    while(i>=0 && j>=0){
        if(board[i][j]==1){
            return false;
        }
        i--;
        j--;
    }
}
void solve(vector<vector<int>>& board, int col, int n){
    // base case
    if(col>=n){
        printsolution(board,n);
        return;
    }
    // solve one case
    // place queen in every row and check for safety
    for(int row=0; row<n; row++){
        if(issafe(row,col,board,n)){
            // safe---> place queen
            board[row][col] = 1;
            // recursive call for next column
            solve(board,col+1,n);
            // backtracking --> recreate original state
            board[row][col] = 0;
        }
    }
}
int main(){

}