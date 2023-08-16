#include<iostream>
using namespace std;
int findmax(int arr[], int size, int &max){
    if(0==size){
        return max;
    }
    if(arr[0]>max){
        max =arr[0];
    }
    findmax(arr+1,size-1, max);


}
int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int max = arr[0];
    max = findmax(arr,10,max);
    cout<<max;
}