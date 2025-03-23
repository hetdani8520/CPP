//Check whether ith bit of a number is set
#include <iostream>
using namespace std;

void set_ith_bit(int num, int i){
    int mask = (1 << i-1); //shift 1 left by i-1 bit

    num = num | mask; //ORing the mask with num will ensure ith bit is always set

    cout << "number after " << i << "th bit set = " << num << endl;
}

int main() {
    int num = 50;
    int i = 4;
    set_ith_bit(num,i);
}