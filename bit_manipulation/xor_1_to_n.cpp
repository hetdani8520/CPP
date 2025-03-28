//xor of numbers from 1 to n(inclusive) - time complexity O[N] (not good I guess)
#include <iostream>
using namespace std;

int xor_1_to_n (int n){
    int xored = 0;
    //n is inclusive here
    for(int i = 1; i <= n; i++){
        xored^= i;
    }
    return xored;
}

int main(){
    int n;
    cin>>n;
    cout << "xor of numbers from 1 to " << n << " is " << xor_1_to_n(n) << endl;
}