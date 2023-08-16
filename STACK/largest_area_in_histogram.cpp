#include<iostream>
#include<vector>
#include<stack>
#include<limits>
using namespace std;
vector<int> prevsmallerelementindex(vector<int>& v){
    stack<int> s;
    s.push(-1);
    vector<int> ans(v.size());
    for(int i=0; i<v.size()-1; i++){
        int curr = v[i];
        // changes done below
        while(s.top()!=-1 && v[s.top()]>=curr){
            s.pop();
        }
        ans[i] = s.top();
        s.push(i);// push the index
    }
    return ans;
}
vector<int> nextsmallerelementindex(vector<int>& v){
    stack<int> s;
    s.push(-1);
    vector<int> ans(v.size());
    for(int i=v.size()-1; i>=0; i--){
        int curr = v[i];
        // changes done below
        while(s.top()!=-1 && v[s.top()]>=curr){
            s.pop();
        }
        ans[i] = s.top();
        s.push(i); // push the index
    }
    return ans;
}
int largestarea(vector<int>& height){
    // previous smaller element array
    vector<int> prev = prevsmallerelementindex(height);
    // next smaller element array
    vector<int> next = nextsmallerelementindex(height);
    // finding maximum area
    int size = height.size();
    int maxarea = -23;
    for(int i=0; i<height.size(); i++){
        int length = height[i];
        if(next[i]==-1){
            next[i]=size;
        }
        int width = next[i]-prev[i]-1;
        int area = length*width;
        maxarea = max(maxarea,area);
    }
    return maxarea;
}
int main(){
    vector<int> a{2,1,5,6,2,3};
    int area = largestarea(a);
    cout<< area;
}