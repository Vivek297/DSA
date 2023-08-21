#include<iostream>
#include<string>
using namespace std;
void removeocc(string& s, string& part){
        int found = s.find(part);// it will return the statring index
        if(found!=string::npos){
            // part string has been located
            // please remove it
            string left_part = s.substr(0,found);
            string right_part = s.substr(found+part.size(), s.size());
            s = left_part + right_part;

            removeocc(s,part);
        }
        else{
            // base case
            return;
        }

}
string removeOccurrences(string s, string part) {
    removeocc(s,part);
    return s;
}
int main(){

}