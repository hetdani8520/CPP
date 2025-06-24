#include<iostream>
#include<vector>
#include<string>

using namespace std;

class C1 {
    //properties
    int a; //by default in C++, class properties/methods have access policy/modifier set to "private" 
    public:
    
    //methods (members = data members + member functions)
    void setval(int val_cfg){
        a = val_cfg;
    }

    int getval(){
        return a;
    }

};

int main(){
    C1 o1; //In C++ just creating a handle o1 creates an object of class type C1
    o1.setval(77);
    cout << "get val of a= " << o1.getval() << endl;
    return 0;
}
