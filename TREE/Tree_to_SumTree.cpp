#include<iostream>
using namespace std;
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
int converttosumtree(node* root){
    // empty case
    if(root == NULL){
        return 0;
    }
    // find leftans
    int leftans = converttosumtree(root ->left);
    // find rightans
    int rightans = converttosumtree(root ->right);
    // update the node
    root -> data = root->data + leftans + rightans;
    // return root data
    return root->data;
}
int main(){

}