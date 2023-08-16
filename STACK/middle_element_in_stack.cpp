#include<iostream>
#include<stack>
using namespace std;
void printmiddle(stack<int>& s, int totalsize){
    if(s.size()==0){// empty case
        cout<<"No element present";
    }
    // Base case
    if((totalsize/2)+1== s.size()){
        cout<<"midlle element "<<s.top();
        return;
    }
    //operation
    int temp = s.top();
    s.pop();
    //recursive call
    printmiddle(s,totalsize);
    //backtracking
    s.push(temp);
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
    int totalsize = s.size();
    printmiddle(s,totalsize);

}