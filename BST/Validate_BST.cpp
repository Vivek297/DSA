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
    
    // 1st node case(empty tree)
    if(root == NULL){
        root = new node(data);
        return root;
    }
    // insert into left
    if(root-> data > data){
        root -> left = insertintobst(root-> left, data);
    }
    // insert into right
    else{
        root->right = insertintobst(root -> right, data);
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
bool solve(node*root, long long int lb, long long int ub){
    // empty tree is a bst
    if(root == NULL){
        return true;
    }
    // root has no limit
    if(root-> data> lb && root->data< ub){
        // check left subtree is bst or not
        bool lA = solve(root->left, lb,root->data);
        // check right subtree is bst or not
        bool rA = solve(root-> right,root-> data,ub);
        // both right and left subtree should be bst
        return lA && rA;
    }
    else{
        return false;
    }
}
int main(){
    node* root = new node(10);
    takeinput(root);
    levelordertraversal(root);

}