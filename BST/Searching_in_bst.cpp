#include<iostream>
#include<queue>
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
void levelordertraversal(node* root){
    // empty tree
    if(root == NULL){
        return;
    }
    queue <node*> q;
    // push root node in the queue
    q.push(root);
    q.push(NULL);
    // run loop until queue does not become empty
    while(!q.empty()){
        // fetch front element
        node* temp = q.front();
        q.pop();
        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp -> data<<" ";
            // left child exist  or not
            if(temp -> left){
                q.push(temp -> left); // push left child
            }
            // right child exist or not
            if(temp -> right){
                q.push(temp -> right);
            }
        }
        
    }

}
bool findnode(node* root, int target){
    // base case
    if(root == NULL){
        return false;
    }
    // found 
    if(root -> data == target){
        return true;
    }
    // search in left
    else if(root-> data > target){
        return findnode(root->left,target);
    }
    else{
        return findnode(root->right,target);
    }
}
int main(){
    node* root = new node(10);
    takeinput(root);
    levelordertraversal(root);
    bool yo = findnode(root,2);
    cout<<yo;
}