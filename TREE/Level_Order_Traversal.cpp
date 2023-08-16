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
    node* root = NULL;
    root = buildtree(10);
    levelordertraversal(root);

}