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
node* inordersuccessor(node* root, node* x){
    node* succ = 0;
    node* curr = root;
    while(curr){
        if(curr-> data> x->data){
            succ = curr;
            curr = curr-> left;
        }
        else{
            curr = curr-> right;
        }
        return succ;
    }
}