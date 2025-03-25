//toggle ith bit of a number
#include <iostream>
using namespace std;


int toggle_ith_bit (int num, int i){
    int mask = 1 << (i - 1);

    num = num ^ mask; //xor with 1 toggles that particular bit of a number

    return num;
}


int main(){
    //int num = 64;
    int num;
    int i;
    cin>>num;
    cin>>i;

    cout << "toggling " << i << " th bit of a number " << num << " gives " << toggle_ith_bit(num,i) << endl;

}