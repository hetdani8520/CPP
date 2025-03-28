//swap two numbers
#include <iostream>
using namespace std;

//Variables a & bb are passed by ref to func swap_two_num()
void swap_two_num (int &a, int &b){
    a = (a^b);
    b = (a^b);
    a = (a^b);
}

int main(){
    int a, b;
    cin>>a;
    cin>>b;
    cout << "values of a= " << a << " & b= " << b << " BEFORE swapping" << endl;
    swap_two_num(a,b);
    cout << "values of a= " << a << " & b= " << b << " AFTER swapping" << endl;
}