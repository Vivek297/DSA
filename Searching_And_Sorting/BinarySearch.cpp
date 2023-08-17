#include<iostream>
using namespace std;
int binarysearch(int arr[],int size,int target){
    int s = 0;
    int e = size-1;
    int mid = s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==target){
            return mid;
        }
        if(arr[mid]<target){
            s =mid+1;
        }
        else if(arr[mid]>target){
            e = mid -1;
        }
        mid = s+(e-s)/2;
    }
    return -1;
}
int main(){

}