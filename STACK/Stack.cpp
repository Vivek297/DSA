#include<iostream>
using namespace std;

class Stack{
    public:
    int* arr;
    int top;
    int size;

    Stack(int size){
        arr = new int[size];
        this -> size= size;
        top = -1;
    }
    // implementing Stack
    // 1. PUSH operation
    void push(int data){
        if(size -top>1){
            top++;
            arr[top] = data;
        }
        else{
            cout<<"stack overflow"<<endl;
        }
    }
    // 2. POP Operation
    void pop(){
        if(top== -1){
            cout<<"stack overflow";
        }
        else{
            top--;
        }
    }
    // 3. PEEK Operation
    void getTop(){
        if(top == -1){
            cout<<"stack empty";
        }
        else{
            cout<<arr[top];
        }
    }
    // 4. SIZE Operation
    int getSize(){
        return top+1;
    }
    // 5. isEmpty operation
    bool isEmpty(int top){
        if(top == -1){
            return true;
        }
        return false;
    }
};


int main(){
    Stack s(5);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
}