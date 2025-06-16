#include<iostream>
#include<vector>

using namespace std;


int main(){
    string str = "het";

    for(int i=0;i<3;i++){
        cout << str[i] << endl;
    }

    //string as an array of characters
    const char s[] = {"hello"};
    const char null_terminated_str[] = {'h','e','l','l','o','0'};

    for(int j=0;j<5;j++){
        if(null_terminated_str[j]){
        cout << null_terminated_str[j] << endl;
        }
    }

    return 0;
}