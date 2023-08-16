#include<iostream>
using namespace std;
#include<queue>
#include<vector>
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int data){
        this -> data = data;
        left = NULL;
        right = NULL;
    }
};
node* buildtree(int data){
    // -1 indicates that we have arrived at the leaf node and hence return Null
    if(data == -1){
        return NULL;
    }
    // create root node(solve one case)
    node* root = new node(data); 
    // recursion handles for left and right subtree
    int leftdata;
    cout<<"Enter data of left of "<< data<< endl;
    cin>> leftdata;
    root -> left = buildtree(leftdata);
    int rightdata;
    cout<<"Enter data of right of "<< data<<endl;
    cin>> rightdata;
    root -> right = buildtree(rightdata);
    return root; // return the root node

}
int height(node* root){
    if(root== NULL){
        return 0;
    }
    int lh = height(root -> left);
    int rh = height(root -> right);
    int ans = max(lh,rh)+1;
    return ans; 
}
bool isbalanced(node* root){
    // base case --> tree empty
    if(root==NULL){
        return true;
    }
    // solve 1 case
    int lh = height(root -> left);
    int rh = height(root -> right);
    int diff = abs(lh-rh);
    bool ans1 = diff<=1;
    // recurssion
    bool leftans = isbalanced(root -> left);
    bool rightans = isbalanced(root -> right);
    // ans1, leftans && rightans all are true
    if(ans1 && leftans && rightans){
        return true;
    } 
    else{
        return false;
    }
}
int main(){
    node*root = buildtree(10);
    bool balance = isbalanced(root);
    cout<< balance;

}