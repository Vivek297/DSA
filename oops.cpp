#include<iostream>
using namespace std;
#include<vector>
#include<string>
// class Animal{
//     string name;

//     public:
//     Animal(){
//         cout<<" i am mad"<<endl;
//     }
//     Animal(int x, int y){
//         age = x;
//         weight = y;
//     }
//     public:
//     int age;
//     int weight;
//     void eat(){
//         cout<< " i am eating"<<endl;
//     }

// };
// class Dog:protected Animal{

//     public:
//     int weight;
//     int num;
//     void bark(){
//         Animal::eat();
//     }
//     void umar(){
//         cout<<this->age;
//     }
// };
// class Germanshepherd: public Dog{
//     public:
//     void num1(){
//         cout<<this->num<<endl;
//     }
// };
class A{
    public:
    int a;
};
class B:public A{
    public:
    int b;
};
class C:public A{
    public:
    int c;
    int b;
};
class D:public A, public C{
    public:
    int d;
};
int main(){
    // Animal ball;
    // ball.eat();
    // Dog bat;
    // cout<<bat.weight<<endl;
    // bat.umar();
    // Germanshepherd german;
    // german.umar();
    // german.num1();

    // Multiple inheritance
    C obj;
    obj.a;
    D obj1;
    obj1.b;

}