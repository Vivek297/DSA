#include<iostream>
#include<vector>
using namespace std;
class minstack{
    public:
    vector<pair<int,int>> st;
    minstack(){

    }
    void push(int val){
        // empty case -> both values same in this case
        if(st.empty()){
            pair<int,int> p = make_pair(val,val);
            st.push_back(p);
        }
        // non empty case
        else{
            pair<int,int> p;
            p.first = val;
            // min. till now to be inserted
            p.second = min(val, st.back().second);
            st.push_back(p);
        }
    }
    void pop(){
        st.pop_back();
    }
    int top(){
        // back function is used to find the last element of the vector
        return st.back().first;
    }
    int getmin(){
        return st.back().second;
    }
};

int main(){

}