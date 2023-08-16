#include<iostream>
using namespace std;
// There are two types of polymorphism
// 1. COMPILE TIME POLYMORPHISM
// (a) FUNCTION OVERLOADING
class maths{
    public:
    int sum(int a, int b){
        return a + b;
    }
    int sum (int a, int b , int c){
        return a+b+c;
    }    
};

// (b) OPERATOR OVERLOADING
class param{
    public:
    int val;
    void operator +(param&obj1){
        int value1 = obj1.val;
        int value2 = obj1.val;
        cout<<(value1*value2);
    }
};

// 1. Run Time Polymorphism


int main(){
    // maths obj;
    // cout<<obj.sum(1,2)<<endl;
    // cout<<obj.sum(1,2,3)<<endl;

    // param obj1, obj2;
    // obj1.val = 7;
    // obj2.val = 2;
    // obj1 + obj2;
}   