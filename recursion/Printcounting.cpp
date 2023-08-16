#include<iostream>
using namespace std;
void printcounting(int n){
    if(n==0){
        return;
    }
    cout<<n;
    printcounting(n-1);
}
int main(){
    int n = 6;
    printcounting(n);
}