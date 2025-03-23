//check if the given number is odd or even (checked by using bitwise AND)
#include <iostream>
using namespace std;

void check_even_or_odd(int num){

    if(num&1){ //if lsb is 1 that means number is odd else even
        cout << "number " << num << " is ODD" << endl;
    }else{
        cout << "number " << num << " is EVEN" << endl;
    }
}

int main() {
    //58=111010
    int num = 58;
    //number 58 is even
    check_even_or_odd(num);
}