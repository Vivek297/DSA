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
int main(){
buildtree(10);
}