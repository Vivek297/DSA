#include<iostream>
using namespace std;
void reverse(string& str, int s, int e){
    //base case
    if(s>e || s==e){
        return ;
    }
    // process
    swap(str[s],str[e]);
    // recursive call
    reverse(str, s++, e--);
}
int main(){
    string str = "vivek";
    reverse(str,0,4);
    cout<<str;

}