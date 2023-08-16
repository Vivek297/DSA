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
node* deletenodeinbst(node* root, int target){
    // base case
    if(root == NULL){
        return root;
    }
    if(root -> data == target){
        //1. leaf node
        if(root -> left == NULL && root -> right == NULL){
            return NULL;
        }
        //2. left child not exist
        else if(root -> left == NULL && root-> right!= NULL){
            node* child = root->right;
            return child;
        }
        //3. right child does not exist
        else if(root-> right == NULL && root-> left!= NULL){
            node* child = root->left;
            return child;
        }
        //4. both child exist
        else{
            int inorderpre = findmax(root->left);
            root -> data = inorderpre;
            deletenodeinbst(root->left,inorderpre);
        }

    }
    // search in right subtree
    else if(root -> data< target){
        root -> right = deletenodeinbst(root->right, target);
    }
    else{// search in left subtree
        root -> left = deletenodeinbst(root->left, target);
    }
    return root;
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
int main(){
    node* root = new node(10);
    takeinput(root);
    levelordertraversal(deletenodeinbst(root,5));

}