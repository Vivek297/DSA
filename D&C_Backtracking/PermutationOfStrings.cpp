#include<iostream>
using namespace std;
void printpermutations(string& s, int i){
    // base case
    if(i>=s.length()){
        cout<<s<<" ";
        return;
    }
    //swapping
    for(int j=i; j<s.length(); j++){
        //swap
        swap(s[i],s[j]);
        //recurssion
        printpermutations(s,i+1);
        //backtracking
        swap(s[i],s[j]);
    }
}
int main(){

}