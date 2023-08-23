#include<iostream>
using namespace std;
int numsquarehelper(int n){
    // base
    if(n==0) return 1;
    if(n<0) return 0;

    int ans = INT_MAX;
    int i = 1;
    int end = sqrt(n);
    while(i<=end){
        int perfectsquare = i*i;
        int numberofperfectsquare = 1+numsquarehelper(n-perfectsquare);
        if(numberofperfectsquare < ans){
            ans = numberofperfectsquare;
        }
        ++i;
    }
    return ans;
}
int numSquares(int n){
    return numsquarehelper(n)-1;
}
int main(){

}