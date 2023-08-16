#include<iostream>
#include<stack>
using namespace std;
void insertsorted(stack<int>&s, int target){
    if(s.empty()){
        s.push(target);
        return;
    }
    // base case
    if(s.top()<= target){
        s.push(target);
        return;
    }
    // normal case
    int topelement = s.top();
    s.pop();
    // recursive call
    insertsorted(s,target);
    // backtracking
    s.push(topelement);
}
void sortstack(stack<int>& s){
    if(s.empty()){
        return;
    }
    // step-1
    int topelement = s.top();
    s.pop();
    // recursive call
    sortstack(s);
    // step-2
    insertsorted(s,topelement);
}
int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(6);
    s.push(4);
    s.push(6);
    s.push(7);
    s.push(8);
    sortstack(s);
    // insertsorted(s,5);
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    

}