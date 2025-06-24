#include<iostream>
#include<vector>
#include<string>

using namespace std;

class C1{
    int a;
    public:
    C1(int init){
        cout << "constructor called" << endl;
        a = init;
    }

    int getval(){
        return a;
    }

};

int main(){
    C1 o1(5);
    cout << "value of a initialized using constructor is=" << o1.getval() << endl; 

}