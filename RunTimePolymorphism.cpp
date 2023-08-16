#include<iostream>
using namespace std;
class Animal{
    public:
    virtual void speak(){
        cout<<"speaking...."<<endl;
    }
};
class Dog:public Animal{
    public:
    void speak(){
        cout<<"barking...."<<endl;
    }
    void bark(){
        printf("bhonkana....");
    }
};
int main(){
    // Animal *a = new Animal();
    // a->speak();

    Dog *b = new Dog();
    b->speak();

    Animal *a = new Dog();
    a->speak();
}