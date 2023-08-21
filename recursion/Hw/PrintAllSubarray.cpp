#include<iostream>
#include<vector>
using namespace std;
void printsubarrayutil(vector<int> &nums, int start, int end){
    // base case
    if(end==nums.size()){
        return;
    }
    // process
    // 1 case sol.
    for(int i= start; i<= end; i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    // recursive call
    printsubarrayutil(nums,start,end++);
}
void printsubarray(vector<int> &nums){
    for(int start =0; start<nums.size();start++){
        int end = start;
        printsubarrayutil(nums,start,end);
    }
}
int main(){
    vector<int> nums ={1,2,3,4,5};
    int size = 5;
    printsubarray(nums);
}