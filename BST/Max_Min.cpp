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
node* insertintobst(node* root, int data){
    // 1st case(empty tree)
    if(root == NULL){
        root = new node(data);
        return root;
    }
    // 2 case data root node se bdha hai
    if(data<root -> data){
        root ->left = insertintobst(root->left,data);
    }
    else{
        root->right = insertintobst(root->right,data);
    }
    return root;
}
void takeinput(node* &root){
    int data;
    cin>> data;
    while(data!= -1){
        root = insertintobst(root,data);
        cin>> data;
    }
}
int findmin(node* root){
    if(root == NULL){
        return -1;
    }
    node* temp = root;
    while(temp!= NULL){
        temp = temp->left;
    }
    return temp->data;
}
int findmax(node* root){
    if(root == NULL){
        return -1;
    }
    node* temp = root;
    while(temp->right!=NULL){
        temp = temp -> right;
    }
    return temp-> data;
}
int main(){

}