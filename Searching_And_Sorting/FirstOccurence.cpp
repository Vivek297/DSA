#include<iostream>
#include<vector>
using namespace std;
int firstocc(vector<int> arr, int target){
    int s = 0;
    int e = arr.size()-1;
    int ans = -1;
    int mid = s +(e-s)/2;
    while(s<=e){
        if(arr[mid]==target){
            ans = mid;
            e = mid -1;
        }
        else if(arr[mid]>target){
            e = mid -1;
        }
        else if(target>arr[mid]){
            s = mid+1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}
int main(){

}