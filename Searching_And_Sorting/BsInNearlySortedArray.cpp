#include<iostream>
using namespace std;
#include<vector>
int binarysearch(vector<int> arr, int target){
    int s = 0;
    int e = arr.size()-1;
    int mid = s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==target){
            return mid;
        }
        if(arr[mid-1]==target){
            return mid-1;
        }
        if(arr[mid+1]==target){
            return mid+1;
        }
        if(arr[mid]>target){
            e = mid -2;
        }
        else{
            s = mid+2;
        }
        mid = s+(e-s)/2;
    }
    return -1;
}
int main(){

}