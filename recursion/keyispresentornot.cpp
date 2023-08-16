#include<iostream>
using namespace std;
bool checkkey(string str, char key, int i, int n){
    if(str[i] ==key){
        return true;
    }
    if(i==n){
        return false;
    }
    bool ans = checkkey(str,key,i+1,n);
    return ans;

}
int main(){
    string str = "vivek";
    char key = 'd';
    int i=0;
    int n = 10;
    bool check = checkkey(str,key,i,n);
    cout<<check;

}