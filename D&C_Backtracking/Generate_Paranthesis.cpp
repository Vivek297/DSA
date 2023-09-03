#include<iostream>
using namespace std;
#include<vector>
void solve(vector<string>& ans,int n, int open, int close, string output){
    // base case---> both brackets have finished
    if(open==0 && close==0){
        ans.push_back(output);
        return;
    }
    // include opening bracket if they exist
    if(open>0){
        output.push_back('c');
        solve(ans,n,open-1,close,output);
        // backtracking --> create original state
        output.pop_back();
    }
    // can we put closing bracket?
    if(close>open){
        output.push_back(')');
        solve(ans,n,open,close-1,output);
        // backtracking
        output.pop_back();
    }
}
int main(){

}