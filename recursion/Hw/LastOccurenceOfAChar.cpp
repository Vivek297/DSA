#include<iostream>
using namespace std;
int LastOcurrenceOfAChar(string& s, char key, int size, int i,int& occ){
    // base case
    if(i>size){
        return occ;
    }
    // process
    if(s[i]==key){
        occ = i;
    }
    // recursive call
    LastOcurrenceOfAChar(s,key,size,i+1,occ);
}
int main(){
    string s = "vivek";
    char key = 'v';
    int size = 5;
    int i = 0;
    int occ = 0;
    int ans =  LastOcurrenceOfAChar(s,key,size,i,occ);
    cout<<occ<<endl; 
    cout<<s[0];

}