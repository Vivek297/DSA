#include<iostream>
using namespace std;
void merge(int arr[], int s, int e){
    int mid = s+(e-s)/2;
    int len1 = mid -s+1;
    int len2 = e - mid;
    int*left = new int[len1];
    int* right = new int[len2];
    int k = s;
    for(int i=0; i<len1; i++){
        left[i]=arr[k++];
    }
    // copy values to right array
    k = mid+1;
    for(int i=0; i<len2; i++){
        right[i]=arr[k++];
    }
    // merge 2 sorted arrays logic
    int leftindex = 0;
    int rightindex = 0;
    int mainarrayindex = s;
    // run loop until any of the array finishes
    while(leftindex<len1 && rightindex<len2){
        // left array has smaller value
        if(left[leftindex]<right[rightindex]){
            arr[mainarrayindex] = left[leftindex++];
        }
        // right array has smaller value
        else{
            arr[mainarrayindex++]=right[rightindex++];
        }
    }
    // copy left array value if right array has finished
    while(leftindex<len1){
        arr[mainarrayindex++] = right[rightindex];
    }
}
void mergesort(int arr[],int s, int e){
    if(s>=e){
        return;
    }
    // divide the array
    int mid = s+(e-s)/2;
    // recursive call for left array
    mergesort(arr,s,mid);
    // recursive cal for right array
    mergesort(arr,mid+1,e);
    // merge 2 sorted array
    merge(arr,s,e);
}
int main(){

}