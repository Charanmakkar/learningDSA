#include <iostream>
using namespace std;

void sumN(long int input){
    int result = 0, temp = 0;

    while (input!=0){
        temp = input%10;
        input = input/10;
        result = result+temp;
    }

    cout << "Result : " << result;
}

int main(){
    sumN(852085208520);

    return 0;
}