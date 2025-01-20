#include<bits/stdc++.h>
using namespace std;

// Firstelement will came last and all element shift one placre left
// 1 2 3 4 5 => 2 3 4 5 1


// brute approch
void leftRotateOne(vector<int>&arr,int n){
    int first=arr[0];
    for(int i=0;i<n-1;i++){  
        arr[i]=arr[i+1];
    }
    arr[n-1]=first;
}

// time comple for left rotate k place= O(n*k)
void leftRotateByKplace(vector<int>&arr,int n,int k){
    for(int i=0;i<k;i++){
        leftRotateOne(arr,n);
    }
}


// Optimal approch for left rotate by k place
void leftRotateKplace(vector<int>& arr, int n, int k) {
    k = k % n; // Handle cases where k > n
    reverse(arr.begin(), arr.begin() + k); // Reverse the first k elements
    reverse(arr.begin() + k, arr.end()); // Reverse the remaining n-k elements
    reverse(arr.begin(), arr.end()); // Reverse the entire array
}


int main(){
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // leftRotateByKplace(arr,n,k);
    // for(auto it:arr) cout<<it<<" ";
    leftRotateKplace(arr,n,k);
    for(auto it:arr) cout<<it<<" ";
    return 0;
}