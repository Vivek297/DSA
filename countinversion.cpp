#include<iostream>
using namespace std;
#include<vector>

// METHOD 1
// long countversions(vector<int> arr){
//     int count = 0;
//     for(int i = 0; i<arr.size(); i++){
//         for(int j = i+1; j<arr.size(); j++){
//             if(arr[i]>arr[j]){
//                 count+=1;
//             }
//         )
//     }
//     return count;
// }


// METHOD 2

long merge(vector<int>&arr, vector<int>&temp, int start, int mid, int end){
    int i=start, j= mid+1, k =start;
    long c= 0;
    while(i<=mid && j<-end){
        if(arr[i] <= arr[j]){
            temp[k++] = arr[i++];
        }
        else{
            temp[k++] = arr[j++];
            c+= mid-i+1;
        }
    }
    while(i<=mid){
        temp[k++] = arr[i++];    
    }
    while(j<=end)
        temp[k++] = arr[j++];
    while(start<=end)
        arr[start] = temp[start];
        ++start;
    return c;    
}
long mergesort(vector<int>&arr, vector<int>&temp, int start, int end){
    if(start>=end) return 0;
    int mid  = start +(end  -  start)/2;
    long c = 0;
    c+= mergesort(arr,temp,start,mid);
    c+= mergesort(arr,temp,mid+1,mid);
    c+= mergesort(arr,temp,start,mid);
    return c;
}
long countinversions(vector<int> arr){
    long c =0; // inversion counts
    vector<int>temp(arr.size(),0);
    c = mergesort(arr,temp,0,arr.size()-1);
    return c;
}
int main(){
    vector<int>arr={4,5,6,2,4,8,2};
    long a =countinversions(arr);
    cout<<a<<endl;
    cout<<"djchscb";
}