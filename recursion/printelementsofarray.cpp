#include<iostream>
using namespace std;
void print(int arr[], int size){
    if(size ==0){
        return;
    }
    cout<<arr[0];
    print(arr+1,size-1);
}
int main(){

}