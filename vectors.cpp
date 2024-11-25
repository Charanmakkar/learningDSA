#include <iostream>
using namespace std;
#include <bits/stdc++.h>
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

vector<int> pairSumFunc(vector<int> myVector, int target){
    vector<int> ans(2,0);

    sort(myVector.begin(), myVector.end());

    // Brute Force approach
    // for(int i=0; i<myVector.size(); i++){
    //     for(int j=i+1; j<myVector.size(); j++){
    //         // cout << arr[i] << " " << arr[j] << endl;
    //         if(myVector[i]+myVector[j] == target){
    //             ans[0] = i;
    //             ans[1] = j;
    //             return ans;
    //         }
    //     }
    // }
    // return ans;


    // Kadane's Algorithm
    int vectorSize = myVector.size();
    int i = 0, j = vectorSize-1;
    while(j>0){
        int pairSum = myVector[i]+myVector[j];
        // cout << pairSum << endl;
        if (target > 0){
            if (pairSum < target) {i++;cout << pairSum << endl;}
            if (pairSum > target) {j--;cout << pairSum << endl;}
            if (pairSum == target) {cout << pairSum << endl;
                ans[0] = i;
                ans[1] = j;
                return ans;
            }
        }
        else{
            if (pairSum < target) {j--; cout << pairSum << endl;}
            if (pairSum > target) {i++; cout << pairSum << endl;}
            if (pairSum == target) {cout << pairSum << endl;
                ans[0] = i;
                ans[1] = j;
                return ans;
            }
        }
    }
    return ans;
}

int majorityElement(vector<int> nums){

    // sort(nums.begin(), nums.end());
    
    // // Brute Force 
    // for (int i = 0; i<nums.size(); i++){
    //     int freq = 0;
    //     for (int val : nums){
    //         if (val == nums[i]) freq++;
    //     }
    //     if(freq > nums.size()/2) return i;
    // }

    // // Optamized
    // sort(nums.begin(), nums.end());
    // int freq = 1, ans = nums[0];
    // for (int i =1; i<nums.size(); i++){
    //     if (nums[i] == nums[i-1]){
    //         freq++;
    //         ans = nums[i];
    //     }
    //     else{
    //         freq = 1;
    //     }
    //     if (freq > nums.size()/2) return ans;
    // }

    // //Moore's Algo
    int freq=0, ans=0;
    for (int i=0; i<nums.size(); i++){
        if (freq==0){ans=nums[i];}
        if (ans == nums[i]){freq++;}
        else{freq--;}
        if (freq > nums.size()/2) return ans;
    }


    return ans;
}


int main(){

    vector<int> arr1 = {1,2,3,4,5};
    vector<int> arr2 = {6,7,3,1,5};

    vector <int> vec(5,0) ;//= {1,2,3,4,5,6,8,5,4,4};
    vector <int> vec1 = {1,2,3,4,5,6,8,5,4,4};
    vector <char> vec2 = {'a', 'b', 'c','d','e'};


    // for(char Value : vec2){
    //     cout << Value << " ";
    // } cout << endl;
    
    // vec1.push_back(25);

    // for(char Value : vec1){
    //     cout << Value << " ";
    // } cout << endl;

    // vec1.pop_back();

    // for(int Value : vec1){
    //     cout << Value << " ";
    // } cout << "\n" <<endl;

    // cout << vec.front() << endl;
    // cout << vec.back() << endl;
    // // cout << vec.at[5] << endl;

    // cout << "Index of Input : " << linearSearch(vec1, 4) << endl;

    // revVector(vec1);
    // for(char Value : vec1){
    //     cout << Value << " ";
    // } cout << endl;

    // vector<int> myVector = {1,2,3,4,5};
    // vector<int> myVector = {-1,-2,-3,-4,-5};
    // int target = -6;
    // vector<int> ans = pairSumFunc(myVector, target);
    // cout << ans[0] << ", " << ans[1] << endl;

    // // MAJORITY NUMBER
    // vector<int> myVector = {1,1,1,1,1,1,2,2,2,2,2,2,2,2,2,55,5};
    // int ans = majorityElement(myVector);
    // cout << ans << endl;

    


    return 0;
}