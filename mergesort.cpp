#include<iostream>
using namespace std;
#include<vector>
void merge(int arr[], int s, int e){
    int mid = s+(e-s)/2;
    int len1 = mid-s+1;
    int len2 = e-mid;
    int *left = new int[len1];
    int *right = new int[len2];
    // Array start from s copy values to left array
    int k =s;
    for(int i=0; i<len1; i++){
        left[i]=arr[k++];
    }
    //Copy values to right array
    k = mid+1;
    for(int i=0; i<len2; i++){
        right[i] = arr[k++];
    }
    // Merge 2 sorted arrays logic
    int leftindex = 0;
    int rightindex = 0;
    int mainarrayindex = s;
    // Run loop until any of the arrays finishes
    while(leftindex<len1 && rightindex<len2){
        // left array has smaller value
        if(left[leftindex]<right[rightindex]){
            arr[mainarrayindex++] = left[leftindex];
        }
        // Right array has smaller value
        else{
            arr[mainarrayindex++] = right[rightindex];
        }
    }    
    // copy logic for left array
    while(leftindex<len1){
        arr[mainarrayindex++] = left[leftindex++];
    }   
    while(rightindex<len2){
        arr[mainarrayindex++] = right[rightindex++];
    } 
}
// 2 method to merge two arrays --> GAP METHOD
// in this method we havent created any temp array
void mergeinplace(vector<int>&v, int start, int mid, int end){
    int total_len = end - start + 1;
    int gap = total_len/2 + total_len%2;
    while(gap > 0){
        int i = start, j = start + gap;
        while(j<=end){
            if(v[i]> v[j]){
                swap(v[i],v[j]);
            }
            i++;
            j++;
        }
        gap = gap<=1? 0 : (gap/2) + gap&2;
    }
}
void mergesort(int arr[],int s, int e){
    // BASE CASE
    if(s>=e)
        return;
    // Divide the array
    int mid = s + (e-s)/2;
    // recursive call for left aray
    mergesort(arr,s,mid);
    // recursuve call for right array
    mergesort(arr,mid+1,e);    
    // merge 2 sorted arrays
    merge(arr,s,e);
}
int main(){
    int arr[] ={4,5,13,2,12};
    int s = 0;
    int n = 5;
    int e = n -1;
    mergesort(arr,s,e);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<"bn ";
    }
    cout<<" sdjchgcusdgc";
    cout<<endl;
}