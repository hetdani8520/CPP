//count the number of bits set in a number
#include <iostream>
using namespace std;


int count_bits_set_in_a_number (int num){
    int cnt;
    for(cnt=0;num!=0;num=num>>1){
        cnt+= (num & 1);
    }
    return cnt;
}

int main(){
    int num;
    cin>>num;
    cout << "number of bits set in " << num << " are " << count_bits_set_in_a_number(num) << endl;
}