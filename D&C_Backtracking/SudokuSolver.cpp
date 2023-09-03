#include<iostream>
using namespace std;
bool isSafe(int value, int board[][9], int curr_row, int curr_col){
    // Row cgeck -> same row, changing column
    for(int col = 0; col<9; col++){
        if(board[curr_row][col]==value){
            return false;
        }
    }
    // column check -> same column, changing row
    for(int row = 0; row<9; row++){
        if(board[row][curr_col]==value){
            return false;
        }
    }
    // 3X3 Box checking
    for(int i=0; i<9; i++){
        if(board[3*(curr_row/3) + i/3][3*(curr_col)/3 + i%3]==value){
            return false;
        }
    }
    return true;
}

bool solve(int board[][9], int n){
    // Traversing the sudoku board
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            // insert only in empty cell
            if(board[i][j]==0){
                for(int value = 1; value<=9; value++){
                    if(isSafe(value,board,i,j)){
                        board[i][j] = value;
                        // recursive call
                        bool aageSolution = solve(board,n);
                        // found solution or not?
                        // due to below line, we dont need base case
                        if(aageSolution){
                            return true;
                        }
                        // backtracking
                        board[i][j] = 0;
                    }
                }
                return false;
            }
        }
    }
    return true;
}
int main(){

}