#include<iostream>
#include<limits.h> // for intmin
using namespace std;
#include<vector>
int maxsumarrayhelper(vector<int>&v, int start, int end){
    if(start == end) return v[start];
    int maxleftbordersum = INT_MIN, maxrightbordersum = INT_MIN;
    int mid = start + (end - start)/2;

    int maxleftsum = maxsumarrayhelper(v, start, mid);
    int maxrightsum = maxsumarrayhelper(v, mid+1, end);

    // Max cross border sum
    int leftbordersum = 0, rightbordersum = 0;
    for(int i = mid+1; i>= start; i--){
        leftbordersum += v[i];
        if(leftbordersum > maxleftbordersum) maxleftbordersum = leftbordersum; 
    }

    for(int i = mid+1; i<=end; i++){
        rightbordersum += v[i];
        if(rightbordersum > maxrightbordersum) maxrightbordersum = rightbordersum;
    }
    int crossbordersum =  maxleftbordersum + maxrightbordersum;
    return max(maxleftsum, max(maxrightsum, crossbordersum));

}
int maxsubarray(vector<int>&nums){
    return maxsumarrayhelper(nums,0,nums.size()-1);
}
int main(){
    vector<int>v = {-2,1,-3,4,-1,2,1,-5,4};
    int n;
    n = maxsubarray(v);
    for(int i = 0; i<v.size(); i++) cout<< v[i]<<" "<<endl;
    cout<<n;
}