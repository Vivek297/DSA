#include<iostream>
using namespace std;
#include<vector>
int binarysearch(vector<int> &arr, int s, int e, int target){
    // base case
    if(s>e){
        return -1;
    }
    // processing
    int mid = (s+(e-s)/2);
    if(arr[mid]==target){
        return mid;
    }
    if(arr[mid]>target){
        return binarysearch(arr,s,mid-1,target);
    }
    else{
        return binarysearch(arr,mid+1,e,target);
    }
}
int main(){
    vector<int> arr{1,2,3,4,5,6,7,8,9,10};
    int target = 8;
    int s = 0;
    int e = 9;
    int ans = binarysearch(arr,s,e,target);
    cout<<ans;
}