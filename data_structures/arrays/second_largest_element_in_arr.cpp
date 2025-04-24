#include <iostream>
#include <vector>

using namespace std;

int getsecondlargest(vector<int> &array) {
    int second_largest= -1;
    int largest = -1;
    for(int i=0;i<array.size();i++){
        if(array[i] > largest){
            second_largest = largest;
            largest = array[i];
        }
        else if(array[i] < largest && array[i] > second_largest){
            second_largest = array[i];
        }
    }
    return second_largest;
}

int main(){
    vector<int> arr = {12, 35, 1, 10, 34, 1};
    cout << "second largest element in the array is " << getsecondlargest(arr) << endl;

    return 0;
}