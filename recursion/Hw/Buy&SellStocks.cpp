#include<iostream>
using namespace std;
#include<vector>
#include<limits.h>
// // galat hai
// int buysell(vector<int> &a, int start, int end,int& maxi){
//     // base case
//     if(end==a.size()){
//         return maxi;
//     }
//     // process
//     maxi = max(a[end]-a[start],maxi);

//     // recursive call
//   buysell(a,start,end++,maxi);
// }  
// int answer(vector<int>&a,int maxi){
//     for(int start=0; start<a.size()-1; start++){
//         int end = start;
//         buysell(a,start,end++,maxi);
//     }
// }
void maxProfitFinder(vector<int>& prices, int i, int& minprice, int& maxprofit){
    // base case
    if(i== prices.size()) return;

    // sol for one case
    if(prices[i]< minprice) minprice = prices[i];
    int todaysprofit = prices[i] - minprice;
    if(todaysprofit > maxprofit) maxprofit = todaysprofit;

    //RE
    maxProfitFinder(prices,i+1,minprice,maxprofit);

}

int maxprofit(vector<int>& prices){
    int minprice = INT_MAX;
    int maxprofit = INT_MIN;
    maxProfitFinder(prices,0,minprice,maxprofit);
    return maxprofit;
}
int main(){
    vector<int> ans{1,2,3,4,5};
    int a = maxprofit(ans);
    cout<<a;

}