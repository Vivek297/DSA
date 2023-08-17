#include<iostream>
using namespace std;
void print(string str, string output,int i){
    if(i==str.length()){
        cout<<output<<endl;
        return;
    }
    // exclude call
    print(str,output,i+1);
    // include call
    output.push_back(str[i]);
    print(str,output,i+1);
}
int main(){
    string str = "abc";
    string output;
    int i = 0;
    print(str,output,i);
}