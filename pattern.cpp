#include <iostream>
using namespace std;



int main(){
    // cout << "Charanpreet Singh\n\n";

    // 01. Square Pattern
    /*
    int N = 3;
    char M = 'A';
    int counter=0;

    for (int i = 1; i<=N; i++){
        for (int j = 1; j<=N; j++){
        cout << "* ";
        }
        cout << endl;
    }

    cout << "\n";

    for (int i = 1; i<=N; i++){
        for (int j = 1; j<=N; j++){
        cout << M++ << " ";
        }
        cout << endl;
    }

    cout << "\n";
    
    for (int i = 1; i<=N; i++){
        for (int j = 1; j<=N; j++){
        cout << ++counter << " ";
        }
        cout << endl;
    }
    */



    // 02. Triangle Pattern
    /*
    *
    * * 
    * * * 
    * * * 
    * * * *
    */
    /*
    int N = 5;
    char M = 'A';
    int counter=0;

    for (int i = 1; i<=N; i++){
        for (int j = 1; j<=i; j++){
            cout << "* ";
        }
        cout << endl;
    }

    cout << "\n";

    for (int i = 1; i<=N; i++){
        for (int j = 1; j<=i; j++){
            cout << M++ << " ";
        }
        cout << endl;
    }

    cout << "\n";
    
    for (int i = 1; i<=N; i++){
        ++counter;
        for (int j = 1; j<=i; j++){
            cout << counter << " ";
        }
        cout << endl;
    }

    cout << "\n";

    for (int i = 1; i<=N; i++){
        for (int j = 1; j<=i; j++){
            cout << j << " ";
        }
        cout << endl;
    }

    cout << "\n";
    
    for (int i = 0; i<=N; i++){
        for (int j = 0; j<=i; j++){
            cout << N-j << " ";
        }
        cout << endl;
    }

    cout << "\n";
    
    for (int i = 0; i<=N; i++){
        for (int j = i+1; j>0; j--){
            cout << j  << " ";
        }
        cout << endl;
    }
    */


    // 03. Inverted Triangle
    /*
    * * * * 
      * * * 
        * *
          *
     */
    /*
    int N = 4;
    char M = 'A';
    int counter=0;

    for (int i = 0; i<=N; i++){
        for (int j = i; j>0; j--){
            cout << "  ";
        }
        for (int k = N-i; k>0; k--){
            cout << "* ";
        }
        cout << endl;
    }

    for (int i = 0; i<=N; i++){
        for (int j = i; j>0; j--){
            cout << "  ";
        }
        for (int k = N-i; k>0; k--){
            cout << counter++<<" ";
        }
        cout << endl;
    }
    
    for (int i = 0; i<=N; i++){
        for (int j = i; j>0; j--){
            cout << "  ";
        }
        for (int k = N-i; k>0; k--){
            cout << M++<<" ";
        }
        cout << endl;
    }
    */



   // 04. Pyramid
   /*
       1
      121
     12321
    1234321
   */
  /*
  int N = 5;
  for (int i = 0; i<N; i++){
    // cout << i;
    for (int j=0; j<(N-i-1); j++){
        cout << " ";
    }
    for (int k=1; k<=i+1; k++){
        cout << k;
    }
    for (int j=i; j>0; j--){
        cout << j;
    }
    cout << endl;
  }
    */


   // 05. Hollow Daimond
   /*
        *
      *   *
    *       *
      *   *
        * 
   */
    // int N = 5;
    // for (int i= 0; i<(N*2)-1; i++){
    // }




    // 05. Butterfly pattern
   /*
    *      *
    **    **
    ***  ***
    ********
    ********
    ***  ***
    **    **
    *      *
   */
    int N = 4;
    int W = 8;
    int l=0, r=0;
    for (int i= 0; i<N; i++){
        for (int i= 0; i<N; i++){
            
            
            l++;
            r--;

        }


    }

    return 0;
}
