#include<iostream>
using namespace std;
#include<vector>
#include<limits.h>
void solve(vector<int>& arr, int sum, int &maxi, int i){
    if(i>=arr.size()){
        maxi = max(sum,maxi);
        return;
    }
    // include call
    solve(arr,sum+arr[i],maxi,i+2);
    // exclude call
    solve(arr,sum,maxi,i+1);
}
int main(){
    vector<int>arr{2,1,4,9};
    int sum = 0;
    int maxi = INT_MIN;
    solve(arr,sum,maxi,0);
    cout<<maxi;


    
}