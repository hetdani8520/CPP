//Two sum (sorting with two pointer technique):- ref:- https://www.geeksforgeeks.org/dsa/check-if-pair-with-given-sum-exists-in-array/
//Better Approach-2
#include<iostream>
#include<vector>

using namespace std;

int temp=0;

int main(){
    int arr[11] = {1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0};
    int temp = 0;

    //two sum
    //sorting followed by two pointer technique
    for(int i=0;i<11;i++){
        for(int j=i+1;j<11;j++){
            if(arr[i] > arr[j]){
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }

        }
    }
    //2 pointer technique to see sum == target
    int target = 13;
    int left = 0;
    int right = 10; //arr.size() - 1

while (left < right){
    int sum = arr[left] + arr[right];
    if(sum == target){
        cout << arr[left] << endl;
        cout << arr[right] << endl;
        return 0;
    }
    else if (sum < target) //move left pointer to right by incrementing by 1
    {
        left++;
    }
    else { //sum > target //move right pointer to the left by decrementing by 1
        right--;
    }
}
}