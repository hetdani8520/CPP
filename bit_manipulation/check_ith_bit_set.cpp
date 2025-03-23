//Check whether ith bit of a number is set
#include <iostream>
using namespace std;

int check_ith_bit_set(int num, int i){
    int mask = (1 << i-1); //shift 1 left by i-1 bit

    if(num&mask){
        cout << i <<"th bit is set of num " << num << endl;
        return 0;
    }else{
        cout << i <<"th bit is NOT set of num " << num << endl;
        return 1;
    }
}

int main() {
    //10 = 1010
    int num = 10;
    int i = 4;
    check_ith_bit_set(num,i);
}