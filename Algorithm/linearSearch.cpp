#include<bits/stdc++.h>
using namespace std;

int linear_Search(vector<int>&arr,int n,int k){
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            return i;;
        }
    }
    return -1;
}

int main(){
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // Input elements of the array
    }
    
    int result = linear_Search(arr, n, k); // Call the linear search function
    
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }
    return 0;
}