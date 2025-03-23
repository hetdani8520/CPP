//clear ith bit of a number is set
#include <iostream>
using namespace std;

void clear_ith_bit(int num, int i){
    int mask = (1 << i-1); //shift 1 left by i-1 bit

    num = num & ~mask; //inverting the mask & the resultant value when bitwise ANDed with number will clear the ith bit & retain the value of remainder bits

    cout << "number after " << i << "th bit cleared = " << num << endl;
}

int main() {
    //58=111010
    int num = 58;
    int i = 4;
    //clearing 4th bit from number 58 gives result of 50=110010
    clear_ith_bit(num,i);
}