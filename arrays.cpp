#include <iostream>
using namespace std;

int linearSearch(int arr[], int sizeOfArray, int input){
    for (int i=0; i<sizeOfArray; i++){
        if (arr[i] == input){
            return i;
        }
    }
    return -1;
}

int sumOfALL(int arr[], int sizeOfArray){
    int sum=0;
    for (int i=0; i<sizeOfArray; i++){
        sum += arr[i];
    }
    return sum;
}

long long int prodOfALL(int arr[], int sizeOfArray){
    long long int prod=1;
    for (int i=0; i<sizeOfArray; i++){
        prod *= arr[i];
    }
    return prod;
}

void reverseArr(int arr[], int sizeOfArray){
    for(int i=0; i<sizeOfArray/2; i++){
        int temp = arr[i];
        arr[i] = arr[sizeOfArray-i];
        arr[sizeOfArray-i] = temp;
    }
}

void swap2values(int arr[], int pos1, int pos2){
    swap(arr[pos1], arr[pos2]);
}

void printIntersections(int arr1[], int sizeOfArray1, int arr2[], int sizeOfArray2){
    for(int i=0; i<sizeOfArray1; i++){
        for(int j=0; j<sizeOfArray2; j++){
            if (arr1[i] == arr2[j]){
                cout << arr1[i] << " ";
            }                
        }
    }
    cout << endl;
}

void printSubArrays(int arr[], int sizeOfArray){
    for(int i=0; i<sizeOfArray; i++){
        for(int j=i; j<sizeOfArray; j++){
            for(int k=i; k<=j; k++){
                cout << arr[k];
            }cout << " "; 
        }            
        cout << "\n"; 
    }
}

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


void printUnique(int arr[], int sizeOfArray){
    for(int i=0; i<=sizeOfArray; i++){
        for(int j=i+1; j<=sizeOfArray; j++){
            if (arr[i] == arr[j]){
                break;
            }
            else{
                cout << arr[i] << " ";
                break;
            }
            // cout << arr[i] << endl;
        }
    }
    cout << endl;
}

int pairSum(int arr[], int sizeOfArray, int target, int &a, int &b){
    //Brute Force
    for(int i=0; i<sizeOfArray; i++){
        for(int j=i+1; j<sizeOfArray; j++){
            // cout << arr[i] << " " << arr[j] << endl;
            if(arr[i]+arr[j] == target){
                a = i;
                b = j;
                return 1;
            }
        }
    }
    return -1;
}




int main(){

    int arr[] ={20,30,-410,-52,6,5,8,4,8,52,520,52,85,96};
    // int arr[] ={1,2,3,4,5,6};
    int sizeOfArr = (sizeof(arr) / sizeof(int));
    // cout << sizeOfArr << endl;

    int arr1[] = {1,2,3,4,5};
    int arr2[] = {6,7,3,1,5};
    int sizeOfArr1 = (sizeof(arr1) / sizeof(int));
    int sizeOfArr2 = (sizeof(arr2) / sizeof(int));
    // cout << sizeOfArr1 << endl;
    // cout << sizeOfArr2 << endl;

    // for (int i = 0; i<(sizeof(arr) / sizeof(int)); i++){
    //     cout << arr[i] << " ";    
    // }
    // cout << endl;

    // 01. find smallest and largest number in an array 
    // int smallest = INT32_MAX, largest = INT32_MIN;
    // int smallest_index = 0, largest_index = 0;
    // for (int i = 0; i<(sizeof(arr) / sizeof(int)); i++){
    //     if (arr[i] < smallest){
    //         smallest = arr[i];
    //         smallest_index = i;
    //     }    
    //     if (arr[i] > largest){
    //         largest = arr[i];
    //         largest_index = i;
    //     }
    // }
    // cout << "smallest : " << smallest << " at possition " << smallest_index << endl;
    // cout << "largest : " << largest << " at possition " << largest_index << endl;


    // 02. Linear Search - Search a value in an array and return it's index 
    // int N = 80;
    // cout << "The Number " << N << " lies at position " << linearSearch(arr, sizeOfArr, N) << endl;

    // 03. Reverse an array 
    // for (int i = 0; i<(sizeof(arr) / sizeof(int)); i++){
    //     cout << arr[i] << " "; 
    // }
    // cout << endl;

    // reverseArr(arr, sizeOfArr);

    // for (int i = 0; i<(sizeof(arr) / sizeof(int)); i++){
    //     cout << arr[i] << " ";
    // }
    // cout << endl;
    


    // 04. Sum and Product of all Numbers in array 
    // cout << "Sum of all number in array : " << sumOfALL(arr, sizeOfArr) << endl;
    // cout << "Prod of all number in array : " << prodOfALL(arr, sizeOfArr) << endl;


    // 05. swap min and Max number of an array 
    // int smallest = INT32_MAX, largest = INT32_MIN;
    // int smallest_index = 0, largest_index = 0;
    // for (int i = 0; i<(sizeof(arr) / sizeof(int)); i++){
    //     if (arr[i] < smallest){
    //         smallest = arr[i];
    //         smallest_index = i;
    //     }    
    //     if (arr[i] > largest){
    //         largest = arr[i];
    //         largest_index = i;
    //     }
    // }
    // swap2values(arr, smallest_index, largest_index);
    // for (int i = 0; i<(sizeof(arr) / sizeof(int)); i++){
    //     cout << arr[i] << " "; 
    // }
    // cout << endl;


    // // 06. Print Unique values in array
    // cout << "Print Unique values in array" << endl;
    // printUnique(arr, sizeOfArr);


    // // 07. Print intersection of 2 array
    // cout << "Print intersection of 2 array" << endl;
    // printIntersections(arr1, sizeOfArr1, arr2, sizeOfArr2);


    // 08. SUBARRAYS
    // int myArray[] = {1,2,3,4,5};
    // int myArray[] = {1,2,3,4,5};
    // int sizeOFmyArray = (sizeof(myArray) / sizeof(int));
    // cout << maxSubArray(myArray, sizeOFmyArray) << endl;

    // 09. Pair Sum = sum of 2 number equal to target, return index
    int myArray[] = {1,2,3,4,5};
    int target = 6;
    int index1 = 0, index2 = 0;
    int sizeOFmyArray = (sizeof(myArray) / sizeof(int));
    pairSum(myArray, sizeOFmyArray, target, index1, index2);
    cout << index1 << " " << index2 << endl;



    return 0;
}