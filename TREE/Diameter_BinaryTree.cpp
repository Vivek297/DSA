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
    // base case --> empty tree
    if(root == NULL){
        return 0;
    }
    // left subtree right
    int lh = height(root->left);
    // right subtree right
    int rh = height(root->right);
    // max. of both the heights
    int ans = max(lh,rh)+1;
    return ans;
}
int diameter(node* root){
    // base case-> empty tree
    if(root == NULL){
        return 0;
    }
    //left subtree check
    int op1 = diameter(root->left);
    // right subtree check
    int op2 = diameter(root->right);
    // root is included in answer
    int op3 = height(root->left) + height(root->right);
    // longest path and hence max. is taken
    int ans = max(op1,max(op1,op2));
    // return diameter
    return ans;
}
int main(){
    node* root = buildtree(10);
    int dia = diameter(root);
    cout<<dia;
}