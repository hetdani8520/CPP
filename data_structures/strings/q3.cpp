#include<iostream>
#include<string>
#include<vector>

using namespace std;
using std::string;

string s[] = {};

//TODO:int arr = {1, 23, 4, 67}, rearrange it to make the largest integer possible, result: 764321
//seems like need to before sort based on comparison between ordering of adjacent values.
int main(){
    int arr[] = {1, 23, 4, 67};
    for(int i =0;i<4;i++){
        s[i] = to_string(arr[i]);
    }
}