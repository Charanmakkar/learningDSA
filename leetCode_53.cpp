#include <iostream>
using namespace std;

int maxSubArray(int arr[], int sizeOfArray){

    // Brute Force Approach
    // int maxSum = INT32_MIN;
    // for(int st=0; st<sizeOfArray; st++){
    //     int currSum = 0;
    //     for(int en=st; en<sizeOfArray; en++){
    //         currSum += arr[en];
    //         maxSum = max(currSum, maxSum);
    //     }
    // }
    // return maxSum;

    // Kadane's Algorithm
    int currSum = 0, maxSum = INT32_MIN;
    for (int i = 0; i<sizeOfArray; i++){
        currSum += arr[i];
        maxSum = max(currSum, maxSum);
        if (currSum<0) currSum=0;
    }
    return maxSum;
}



int main(){

    int myArray[] = {1,2,3,4,5};
    int sizeOFmyArray = (sizeof(myArray) / sizeof(int));
    cout << maxSubArray(myArray, sizeOFmyArray) << endl;

    return 0;
}