#include<bits/stdc++.h>
using namespace std;

// Uniun => [1 2 3 4 5 5 9 1 2 6] & [1 2 5 6 4 2 1 5 7]
// Uniun will be both sorted array= [1 2 3 4 5 6 7 9]
// Unique or distinct element from both sorted aray
// you can use set for uniuqe coz it auto remove duplicate for both array 

// Optimal aproch time complexity=> O(n log n)

void findUniun(vector<int>&arr1,vector<int>&arr2,int n){
    set<int>uniunSet;
    // store arr1 into set
    for(auto num1:arr1){
        uniunSet.insert(num1);
    }   
    // store arr2 into set
    for(auto num2:arr2){
        uniunSet.insert(num2);
    }
    // now convert set into vector
    vector<int>uniunnArray(uniunSet.begin(),uniunSet.end());
    
    // print uniunArray
    for(auto it:uniunnArray) cout<<it<<" ";
}

int main(){
    int n;
    cin>>n;
    vector<int>arr1(n);
    for(int i=0;i<n;i++) cin>>arr1[i];
    vector<int>arr2(n);
    for(int i=0;i<n;i++) cin>>arr2[i];
    findUniun(arr1,arr2,n);
    return 0;
}