#include<iostream>
#include<stack>
using namespace std;
void insertatbottom(stack<int>&s, int target){
    // base case
    if(s.empty()){
        s.push(target);
        return;
    }
    // operations
    int top_element = s.top();
    s.pop();
    //recursive call
    insertatbottom(s,target);
    //backtracking
    s.push(top_element);

}
void reversestack(stack<int>&s){
    // base case
    if(s.empty()){
        return;
    }
    // operations
    int target = s.top();
    s.pop();
    //recursive call
    reversestack(s);
    // simply insert top element at bottom
    insertatbottom(s,target);
}
int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(7);
    s.push(8);
    reversestack(s);
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }

}