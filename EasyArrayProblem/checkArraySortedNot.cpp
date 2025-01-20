#include<bits/stdc++.h>
using namespace std;


// Brute Approch time complexity== O(nlogn)  Space=> O(n)
void checkArraySorted(vector<int>&arr,int n){
    vector<int>sortedArray(arr); // created copy of originam array for comparing
    sort(sortedArray.begin(),sortedArray.end()); //sort the copy

    // compare the booth array
    for(int i=0;i<n;i++){
        if(arr[i]!=sortedArray[i]){
            cout<<"Not Sorted";
            return;
        }
    }
    cout<<"Sorted";
}

// One more Brute Aproch is this will take time complexity=> O(n^2)
void isSortedBruteForce(vector<int>& arr, int n) { 
    for(int i = 0; i < n - 1; i++) { 
        for(int j = i + 1; j < n; j++) { 
            if(arr[i] > arr[j]) { 
                cout<<"Not Sorted";
                return ; 
            } 
        } 
    } 
    cout<<"Sorted";
}

// Optimal Aproch Time Complex= O(n) space complexity=> O(1)
void checkArrayIsSorted(vector<int>&arr,int n){
   for(int i=1;i<n;i++){
    if(arr[i]<arr[i-1]){
        cout<<"Not Sorted";
        return;
    }
   }
   cout<<"sorted";
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
//    checkArrayIsSorted(arr,n);
    checkArraySorted(arr,n);

    return 0;
}