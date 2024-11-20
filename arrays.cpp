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

void reverseArr(int arr[], int sizeOfArray){
    for(int i=0; i<sizeOfArray/2; i++){
        int temp = arr[i];
        arr[i] = arr[sizeOfArray-i];
        arr[sizeOfArray-i] = temp;
    }
}

int main(){

    int arr[] ={12000,0,10,20,30,-410,-52,6,5,8,4,8,52,520,52,85,96};
    int sizeOfArr = (sizeof(arr) / sizeof(int))-1;

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
    


    

    return 0;
}