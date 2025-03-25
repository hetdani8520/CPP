//check if the given number is a power of 2
#include <iostream>
using namespace std;

//n & n-1 is a gold mine (kudos to brian kernigham's algorithm)
void check_pow_of_two (int num){
    if(((num != 0) && ((num & (num - 1)) == 0))){
        cout << "num " << num << " is a power of 2" << endl; 
    }else{
        cout << "num " << num << " is NOT a power of 2" << endl;
    }
}

int main(){
    int num = 2049;
    check_pow_of_two(num);
}