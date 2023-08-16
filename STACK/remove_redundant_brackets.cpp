#include<iostream>
#include<stack>
#include<string>
using namespace std;
int checkredundancy(string &s){
    stack<char> st;
    // traverse the expression
    for(int i=0; i<s.length(); i++){
        if(s[i]=='(' || s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/'){
            st.push(s[i]);
        }
        else{
            if(s[i]==')'){// consider closing only
                // flag -> true means redundant
                bool flag = true;
                // pop until we get opening bracket
                while(!st.empty() && st.top()=='('){
                    // operators come -> not redundant
                    if(s[i]=='(' || s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/'){
                        flag = false;
                    }
                    st.pop();
                }
                // either opening bracket or empty stack
                if(!st.empty()){
                    st.pop();// pop opening bracket
                }
                if(flag = true){
                    return true;
                }
            }
        }
    }
    return true;
}
int main(){
    string s = "((a+B))";
    int ans = checkredundancy(s);

}