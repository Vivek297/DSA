#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main(){
    vector<int> v{2,1,4,3};
    stack<int> s;
    vector<int> ans(v.size());
    // intially push -1 in the stack
    s.push(-1);
    // traverse from right to left
    for(int i = v.size()-1; i>=0; i--){// for prev smaller element for(int i=0; i<v.size(); i++)
        // processing element in vector
        int curr = v[i];
        while(s.top()>=curr){
            s.pop();
        }
        // store top element in ans vector
        ans[i] = s.top();
        s.push(curr);
    }
    // print ans vector
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}