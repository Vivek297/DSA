#include<iostream>
using namespace std;
#include<vector>
int robhelper(vector<int>&nums, int i){
    if(i>=nums.size()){
        return 0;
    }
    // solve for 1 case
    int robamt1 = nums[i] + robhelper(nums,i+2);
    int robamt2 = 0+ robhelper(nums,i+1);

    return max(robamt1,robamt2);
}
int rob(vector<int> & nums){
    return robhelper(nums,0);
}