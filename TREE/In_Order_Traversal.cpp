#include<iostream>
using namespace std;
// L N R
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
    if(data == -1){
        return NULL;
    }
    node* root = new node(data);
    int leftdata;
    cout<<"enter data of left of "<< data<< endl;
    cin>> leftdata;
    root -> left = buildtree(leftdata);
    int rightdata;
    cout<<"enter data of right of "<< data<<endl;
    cin>>rightdata;
    root -> right = buildtree(rightdata);
    return root; // reuturn the root node


}
void inordertraversal(node* root){
    // base case
    if(root == NULL){
        return;
    }
    // left child
    inordertraversal(root -> left);
    // node
    cout<< root -> data<<" ";
    // right child
    inordertraversal(root -> right);

}
int main(){
    node* root = buildtree(10);
    inordertraversal(root);
}