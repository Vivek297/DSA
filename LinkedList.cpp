#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    // constructor
    Node(){
        this -> data = 0;
        this -> next = NULL;
    }
    //parameterised constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};
void print(Node* &head){
    if(head == NULL){
        cout<<"linked list doesnt exist"<<endl;
        return;
    }
    Node* temp = head;
    while(temp!= NULL){
        cout<<temp ->data<<" ";
        temp = temp -> next;
    }
}
void insertAtHead(Node* &head,Node* &tail, int data){
    
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    Node* newNode = new Node(data);
    newNode -> next = head;
    head = newNode;
}
void insertAtTail(Node* &tail,Node* &head, int data){

    if(tail == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    Node* newNode = new Node(data); 
    tail -> next = newNode;
    tail = newNode;
}
void insertatspecifiedposition(int data, Node* &newNode, Node* &head ){
    if(head == NULL){
        head = newNode;
        head -> next = NULL;
    }

}
int main(){
    // Node* first = new Node(1);
    // Node* second = new Node(2);
    // Node* third = new Node(3);
    // Node* fourth = new Node(4);

    // first -> next = second;
    // second -> next = third;
    // third -> next = fourth;
    // fourth -> next = NULL;

    Node* tail = NULL;
    Node* head = NULL;
    print(head);
    cout<<endl;


    insertAtHead(head,tail,5);
    insertAtHead(head,tail,4);
    insertAtHead(head,tail,3);
    insertAtHead(head,tail,2);
    insertAtHead(head,tail,1);
    // insertAtTail(fourth,7);
    print(head);

}