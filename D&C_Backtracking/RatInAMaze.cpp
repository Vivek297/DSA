#include<iostream>
#include<vector>
using namespace std;
bool issafe(int x, int y, int row, int col, int arr[][3], vector<vector<bool>>& visited){
    if((x>=0 && x< row) && (y>=0 && y<col) && (arr[x][y]==1) && (visited[x][y]==false)){
        return true;
    }
    else{
        return false;
    }
}
void solvemaze(int arr[3][3], int row, int col, int i, int j, vector<vector<bool>>& visited, vector<string>&path, string output){
    // base case
    if(i==row-1 && j==col-1){
        // destination reached
        path.push_back(output);
        return;
    }
    //solve one case
    // down
    if(issafe(i+1,j,row,col,arr,visited)){
        visited[i+1][j]==true;
        solvemaze(arr,row,col,i+1,j,visited,path,output+'D');
        // backtracking line
        visited[i+1][j] = false;
    }
    // left
    if(issafe(i,j-1,row,col,arr,visited)){
        visited[i][j-1]= true;
        solvemaze(arr,row,col,i,j-1,visited,path,output+'L');
        // backtracking
        visited[i][j-1] = false;
    }
    // right
    if(issafe(i,j+1,row,col,arr,visited)){
        visited[i][j+1]= true;
        solvemaze(arr,row,col,i,j+1,visited,path,output+'L');
        // backtracking
        visited[i][j+1] = false;
    }
    // up
    if(issafe(i-1,j,row,col,arr,visited)){
        visited[i-1][j]= true;
        solvemaze(arr,row,col,i-1,j,visited,path,output+'L');
        // backtracking
        visited[i-1][j] = false;
    }
}
int main(){

}