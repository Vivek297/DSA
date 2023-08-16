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
node* findprecessor(node* root, node* p){
    node* pred = 0;
    node* curr = root;
    while(curr){
        if(curr-> data< p->data){
            pred = curr;
            curr = curr-> right;
        }
        else{
            curr = curr->left;
        }
    }
    return pred;
}