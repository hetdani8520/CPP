//Detect first duplicate in a fixed array (Brute force method: TC: O(n^2))
#include <iostream>

using namespace std;

int main(){

    int cnt; //counter to detect first duplicate

    int arr[5] = {3,3,1,1,6};

    for(int i = 0; i < 5; i++){
        cnt = 0;
        for(int j = 0; j < 5; j++){
            if(arr[i] == arr[j]){
                cnt++;
            }
        }
        if(cnt != 1){
            cout << "FIRST duplicate detected in the given array for element " << arr[i] << " at index " << i << endl;
            break;
        }
    }

    return 0;

}