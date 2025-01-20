#include<bits/stdc++.h>
using namespace std;


// Step1- Reverse entire array
// Step2- Reverse first k elements
// Step3- Reverse Remaining elemens
// This is optimal approch


// Function to right rotate the array by k places
void rightRotateByK(vector<int>& arr, int n, int k) { 
    k = k % n; // handle case when k > n 
    reverse(arr.begin(), arr.end()); // Reverse the entire array
    reverse(arr.begin(), arr.begin() + k); // Reverse the first k elements
    reverse(arr.begin() + k, arr.end()); // Reverse the remaining n-k elements
} 


// This is Brute Approch rotate array by one plce
void rightRotateByOne(vector<int>& arr, int n) { 
    int last = arr[n-1]; 
    for(int i = n-1; i > 0; i--) { 
        arr[i] = arr[i-1]; 
    } 
    arr[0] = last; 
} 
// roate array by kplace
void rightRotateByKplace(vector<int>& arr, int n, int k) { 
    for(int i = 0; i < k; i++) { 
        rightRotateByOne(arr, n); 
    } 
}

int main(){
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // rightRotateByKplace(arr,n,k);
    // for(auto it:arr) cout<<it<<" ";
    rightRotateByK(arr,n,k);
    for(auto it:arr) cout<<it<<" ";
    return 0;
}

// right Roatet K place
/*
    k=3
    arr=[1 2 3 4 5]
    rotateKplace=  [4 5 1 2 3]

*/