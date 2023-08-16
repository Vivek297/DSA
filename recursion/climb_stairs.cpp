#include<iostream>
using namespace std;
int stair(int n){
    if(n==0 || n==1){
        return 1;
    }
    int climb = stair(n-1) + stair(n-2);
    return climb;
}
int main(){
    
}