#include<iostream>
#include<string>
using namespace std;
bool ispalindrome(string& str, int s, int e){
    // base case
    if(s>=e){
        return true;
    }
    // process
    if(str[s]!=str[e]){
        return false;
    }

    // recursive call
    return(str,s++,e--);
}
int main(){

}