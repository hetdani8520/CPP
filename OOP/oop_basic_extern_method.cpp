#include<iostream>
#include<vector>
#include<string>

using namespace std;

class C1 {
    //properties
    int a; //by default in C++, class properties/methods have access policy/modifier set to "private" 
    public:
    
    //methods (just declare method prototype in class & have definition/implementation outside class)
    //probably looks good for readability/structuring code as func prototypes usually go in header files (.h) & implementation of func is specified in .cpp file
    void setval(int val_cfg);

    int getval();

};

void C1::setval(int val_cfg){
    a = val_cfg;
}

int C1::getval(){
    return a;
}

int main(){
    C1 o1; //In C++ just creating a handle o1 creates an object of class type C1
    o1.setval(37);
    cout << "get val of a= " << o1.getval() << endl;
    return 0;
}
