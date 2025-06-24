#include<iostream>
#include<vector>
#include<string>

using namespace std;

class C1{
    int a;
    public:
    //default constructor which gets called when instance of class (object of class C1) is created
    C1(int init){
        cout << "constructor called" << endl;
        a = init;
    }

    //destructor called to deallocate memory once class object is out of scope
    ~C1(){
        cout << "destructor called" << endl;
    }

    int getval(){
        return a;
    }

};

int main(){
    C1 o1(5);
    cout << "value of a initialized using constructor is=" << o1.getval() << endl; 

}