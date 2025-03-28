//check if the given number is a power of 4
#include <iostream>
using namespace std;


int check_pow_of_four (int num){
   if(num == 0){  //if the num = 0, then it is defintelyy not  a multiple of 4 & hence return false
    return 0; 
   } 
   while(num % 4 ==0){ //keep dividing the input number by 4 as far as the modulo is 0 or until the num becomes 1 which will then determine that number is a multiple of 4
    num = num / 4;
   }
   return num == 1; //4^0 = 1 (If we end up at 1, it's a power of 4)
}

int main(){
    int num = 3;

    if(check_pow_of_four(num)){
        cout << "num " << num << " is a multiple of 4" << endl;
    }else{
        cout << "num " << num << " is  NOT a multiple of 4" << endl;
    }
}