#include<iostream>
using namespace std;
bool isarraysorted(int arr[], int size){
    // base case
    if(arr[0]==arr[size-1]){
        return true;
    }
    // processing
    if(arr[0]>arr[1]){
        return false;
    }
    // recursive relation
    return isarraysorted(arr+1,size-1);
}
int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int size = 10;
    bool ans = isarraysorted(arr,size);
    cout<<ans;

}