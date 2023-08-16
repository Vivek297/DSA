#include<iostream>
#include<stack>
using namespace std;

int longestvalidparanthesis(string &s){
    stack<int> st;
    // initially add -1 in stack
    st.push(-1);
    int maxlen = 0;
    
    // traverse the string
    for(int i=0; i<s.length(); i++){
        char ch = s[i];
        // opening bracket
        if(ch=='('){
            st.push(i);
        }
        else{ // closing bracket -> simply pop
            st.pop();
            // stack empty ?
            if(st.empty()){
                st.push(i);
            }
            else{
                // not empty -> calculate length
                int len = i - st.top();
                maxlen = max(len,maxlen);
            }
        }
    }
    return maxlen;
}

int main(){
    string s = ")()())()";
    int ans = longestvalidparanthesis(s);
    cout<<ans;
}