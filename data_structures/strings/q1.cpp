#include<iostream>
#include<vector>
#include<string>

using namespace std;
using std::string;

//int arr = {123, 456. 789}, Reversal of individual integer numbers result should be arr = {321, 654, 987}
//algorithm for decimal reverse


int main(){
    int arr[] = {123, 456, 789};
    int rev = 0;
    for(int i=0;i<3;i++){
        while(arr[i] > 0){
            int pop = arr[i] % 10; //rem (last digit of number)
            rev = rev*10 + pop;
            arr[i] = arr[i] / 10; //quotient;
        }
        arr[i] = rev;
        rev = 0; 
    }
    for(int j=0;j<3;j++){
        cout << "rev elem values " << arr[j] << endl;
    }
}