#include<iostream>
#include<stack>
#include<string>
using namespace std;
bool isValid(string &s){
    stack<char> st;
    for(int i=0; i<s.length(); i++){
        char ch = s[i];
        if(ch == '(' || ch == '{' || ch == '['){
            st.push(ch);
        }
        else{
            if(!st.empty()){
                char topch = st.top();
                if(ch==')' && topch == '('){
                    // matching bracket
                    st.pop();
                }
                else if(ch == '}' && topch == '{'){
                    st.pop();
                }
                else if(ch == ']' && topch == '['){
                    st.pop();
                }
                else{// not matching bracket
                    return false;
                }
            }
            else{
                // staack empty but closing bracket is there
                return false;
            }
        }
    }
    // stack empty traversing whole string
    if(st.empty()){
        return true;// valid paranthesis
    }
    else{
        return false;
    }
}
int main(){
    string str = "{[]}";
    bool ans = isValid(str);
    cout<<ans;

}