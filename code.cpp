#include <iostream>
using namespace std;



int main(){
    // cout << "Charanpreet Singh\n\n";



    // for(int a=0; a<20; a++){
    //     cout << a++ << endl;
    // }



    // char input;
    // while(true){
    
    //     cout << "Enter a Char : ";
    //     cin >> input;

    //     // cout << input << endl;

    //     if (input >= 'A' && input <= 'Z'){
    //         cout << "Upper Case\n\n";
    //     }
    //     if (input>='a' && input<='z'){
    //         cout << "Lower Case\n\n";
    //     }
    //     else{
    //         cout << "Not a Alphabet\n";
    //     }

    //     input = 0;
    // }


    // char input;
    // while(true){    
    //     cout << "Enter a Char : ";
    //     cin >> input;

    //     // cout << input << endl;

    //     if (input >= 65 && input <= 90){
    //         cout << "Upper Case\n\n";
    //     }
    //     if (input>=97 && input<=122){
    //         cout << "Lower Case\n\n";
    //     }
    //     else{
    //         cout << "Not a Alphabet\n";
    //     }

    //     input = 0;
    // }



    // char input;
    // while(true)
    // {
    //     cout << "Enter a Char : ";
    //     cin >> input;
    //     // cout << input << endl;
    //     (input >= 'A' && input <= 'Z')?cout << "Upper Case\n\n":cout << "Lower Case\n\n";
    // }



    // int x = 0;
    // while (x<20){
    //     cout << ++x << endl;
    // }

    

    //Check Prime Number or NOT
    // int input;
    // bool isPrime;

    // while(true){
    //     cout << "Enter a Char : ";
    //     cin >> input;
    //     // cout << input << endl;

    //     for(int x = 2; x<=(input)/2; x++){
    //         if(input%x==0){
    //             isPrime=false;
    //             break;
    //         }
    //         else{
    //             isPrime=true;
    //         }
    //     }
    //     isPrime?cout << input << " is a Prime\n\n":cout << input << " is NON-Prime\n\n";
    // }


    // const int nLine = 10;
    // const int nStarts = 10;

    // for(int i = 0; i<=nLine; i++){
    //     for (int j=0; j<=nStarts; j++){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }


    int n3_Sum = 0;
    int N = 21;
    for (int i = 1; i<=N; i++){
        (i%3==0)?n3_Sum+i:;
    }
    cout << n3_Sum;

    return 0;
}
