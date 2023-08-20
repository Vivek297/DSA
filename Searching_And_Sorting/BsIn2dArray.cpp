#include<iostream>
using namespace std;
bool binarysearch(int arr[][4], int rows, int cols, int target){
    int s = 0;
    int e = rows*cols -1;
    int mid=s + (e-s)/2;
    while(s<=e){
        int rowindex = mid/cols;
        int colindex = mid%cols;
        if(arr[rowindex][colindex]==target){
            return true;
        }
        if(arr[rowindex][colindex]<target){
            s = mid+1;
        }
        else{
            e = mid -1;
        }
        mid = s+(e-s)/2;
    }
    return false;
}
int main(){

}