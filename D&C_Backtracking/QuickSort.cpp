#include<iostream>
using namespace std;
int partition(int arr[], int s, int e){
    //select pivot
    int pivotindex = s;
    int pivot = arr[s];
    // find right place of pivot
    int count = 0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot){
            count++;
        }
    }
    // index pf right place is known now
    int rightindex = s+count;
    swap(arr[pivotindex],arr[rightindex]);
    pivotindex = rightindex;
    // left me chote right me bade
    int i=s;
    int j=e;
    while(i<pivotindex && j>pivotindex){
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        // 2 case ho skte hain
        // A -> you founf the elemnt to swap
        // B -> no need to swap
        if(i< pivotindex && j>pivotindex){
            swap(arr[i],arr[j]);
        }
    }
    return pivotindex;
}
void quicksort(int arr[], int s, int e){
    // base case
    if(s>=e){
        return;
    }
    int p = partition(arr,s,e);
    // recursive calls
    // pivot element--> left
    quicksort(arr,s,p-1);
    // pivot element--> right
    quicksort(arr,p+1,e);
}

int main(){
    int arr[7] = {2,6,4,8,3,5,9};
    quicksort(arr,0,6);
    for(auto i: arr){
        cout<<i<<" ";
    }
}