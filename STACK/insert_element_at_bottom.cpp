#include<iostream>
#include<stack>
using namespace std;
void insertatbotom(stack<int>& s, int target){
    // base case
    if(s.empty()){
        s.push(target);
        return;
    }
    //operation
    int top_element = s.top();
    s.pop();
    // recursive call
    insertatbotom(s,target);
    // backtracking
    s.push(top_element);
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
    insertatbotom(s,9);
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }

}