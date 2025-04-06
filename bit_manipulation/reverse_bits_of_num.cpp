//reverse bits of a number
#include <iostream>
using namespace std;

unsigned int reverse_bits_of_num(unsigned int num){
    unsigned int rev=0;
    for(int i=0;i<32;i++){
        rev = rev << 1;
        rev = rev | (num&1);
        num = num >> 1;
    }
    return rev;
}

int main(){
    unsigned int num;
    cin>>num;
    cout << "original number: " << num << " reversed number: " << reverse_bits_of_num(num) << endl;
}