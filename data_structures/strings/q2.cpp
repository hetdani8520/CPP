#include<iostream>
#include<vector>
#include<string>

using namespace std;
using std::string;


//int arr = {134, 423, 3003, 563}, Replace '3's in integer with 0s. Result arr: {104, 420, 0, 560}
int main(){
    int arr[4] = {134, 423, 3003, 563};
    for(int i=0;i<4;i++){
        string s = to_string(arr[i]);
        for(int j=0;j<s.size();j++){
            if(s[j] == '3'){
                s[j] = '0';
            }
        }
        arr[i] = stoi(s);
        //cout << s << endl;
    }
    for(int k=0;k<4;k++){
        cout << arr[k] << endl;
    }
}