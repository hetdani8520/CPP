//Here the assumption is the numbers in the arr are from 1 to N & the size of array will be N-1
//Also the resultant XOR of array elements from 1 to N which XORed with elements 1 to N will give us the missing element in the array
//because XOR of same numbers is 0 
#include <iostream>
#include <bits/stdc++.h>

using namespace std;



int MissingNum(vector<int>&arr, int N){
    int missing_num=0;
    for (int i = 0; i < N-1; i++){
        missing_num = missing_num ^ arr[i];
    }
    for (int j = 1;j <= N;j++){
        missing_num = missing_num ^ j;
    }
    return missing_num;
}

int main(){
    vector<int> a = {1,2,4,5};
    int N = 5;
    int missing_num = MissingNum(a,N);
    cout << "missing number in the array is " << missing_num << endl;
}