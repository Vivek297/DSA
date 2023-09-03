#include<iostream>
using namespace std;
#include<vector>
void solve(vector<string>& ans,int index, string output, string digits, vector<string>& mapping){
    if(digits.length()==0){
        return;
    }
    if(index>=digits.length()){
        ans.push_back(output);
        return;
    }
    // solve  case and hence recursion handle it
    int digit = digits[index]-'0';
    string value = mapping[digit];// stsore the mapping
    // Traverse the mapping
    for(int i=0; i<value.length(); i++){
        char ch = value[i]; // store char of mapping in ch
        output.push_back(ch); // push that in o/p string
        solve(ans,index+1,output,digits,mapping);
        // backtracking
        output.pop_back(); // if we have used push_back then use pop_back also
    }
}
int main(){

}