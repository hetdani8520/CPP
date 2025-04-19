//Function to rotate bits to the left by n positions
#include <iostream>
using namespace std;
#define INT_BITS 32 
//rotate num right by n bits
int rotate_right_n_bits(int num, int n){

    return ((num >> n) | (num << (INT_BITS - n)));
}


int main(){
    int num = 16;
    int n = 2;
    cout << "rotate number " << num << " RIGHT by " << n << " bits & result is " << rotate_right_n_bits(num,n) << endl;

}