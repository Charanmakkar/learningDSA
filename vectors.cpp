#include <iostream>
using namespace std;
#include<vector>

int linearSearch(vector<int> myVector, int input){
    for(int i=0; i<myVector.size(); i++){
        if( myVector.at(i) == input){
            return i;
        }
    }
    return -1;
}

int revVector(vector<int>& myVector){
    int sizeOfVector = myVector.size();
    cout << sizeOfVector << endl;
    for(int i=0; i<sizeOfVector/2; i++){
        int temp = myVector.at(i);
        cout << temp << endl;
        myVector.at(i) = myVector.at(sizeOfVector - i);
        myVector.at(sizeOfVector - i) = temp;
    }
    return 1;
}



int main(){
    vector <int> vec(5,0) ;//= {1,2,3,4,5,6,8,5,4,4};
    vector <int> vec1 = {1,2,3,4,5,6,8,5,4,4};
    vector <char> vec2 = {'a', 'b', 'c','d','e'};


    // for(char Value : vec2){
    //     cout << Value << " ";
    // } cout << endl;
    
    // vec1.push_back(25);

    for(char Value : vec1){
        cout << Value << " ";
    } cout << endl;

    // vec1.pop_back();

    // for(int Value : vec1){
    //     cout << Value << " ";
    // } cout << "\n" <<endl;

    // cout << vec.front() << endl;
    // cout << vec.back() << endl;
    // // cout << vec.at[5] << endl;

    cout << "Index of Input : " << linearSearch(vec1, 4) << endl;

    revVector(vec1);
    for(char Value : vec1){
        cout << Value << " ";
    } cout << endl;



    return 0;
}