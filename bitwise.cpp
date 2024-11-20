#include <iostream>
using namespace std;

int rev(int input){
    int temp = 0, result = 0;

    while (input != 0){
        temp = input%10;
        result = (result*10)+temp;
        input = input/10;
    }

    return result;
}

int main(){

    // Bitwise operators
    int a = 6, b = 10;
    cout << " & of a, b : " << (a&b) << endl;
    cout << " & of a, b : " << (a|b) << endl;
    cout << " & of a, b : " << (a^b) << endl;
    
    // Bitwise shift
    cout << " 10 << 2 : " << (10 << 2) << endl;
    cout << " 10 >> 1 : " << (10 >> 1) << endl;


    // Reverse of int N
    int N = 123456;
    cout << "Reverse of " << N << "is : " << rev(N) << endl;


    return 0;
}