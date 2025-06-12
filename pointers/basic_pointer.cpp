#include <iostream>
using namespace std;

//size of pointers are not dependent based on the data they point to but rather depend on OS config & CPU arch. 
//For 32-bit CPU, size of pointer = 4 bytes
//For 64-bit CPU size of pointer = 8 bytes

int main(){
    int a = 20; //variable a holds a data value 20 (of data type integer)
    int* p; //pointer (I assume currently WILD pointer-->it contains some random garbage address at this point)

    //pointer to int pointing to memory location where variable a is stored
    //&a = addressof(a)
    p = &a;
    cout << "pointer value= " << p << endl;
    //The process of accessing the value present at the memory address pointed by the pointer is called dereferencing.
    cout << "accessing value stored at mem location stored by pointer p = " << *p << endl;
}