//Program to count flipped bits between numbers a & b
//The result of XOR of a & b will contain some bits set which indicates bit flips.
//a counter that iterates through the xor result & counts the number of bits set will get the flipped bits between a & b 
#include <iostream>
using namespace std;


int count_flipped_bits(int a, int b){
    int xor_res = 0;
    int flip_cnt = 0;
    xor_res = a ^ b;

    for(;xor_res!=0;xor_res = xor_res >> 1){
        flip_cnt = flip_cnt + (xor_res & 1);
    }
    return flip_cnt;
}

int main(){
    int a,b;
    cin>>a;
    cin>>b;
    cout << "number of bits flipped b/w A & B are: " << count_flipped_bits(a,b) << endl;
}