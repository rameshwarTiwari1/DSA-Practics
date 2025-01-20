#include<bits/stdc++.h>
using namespace std;

/*
This problem is a variation of the popular Dutch National flag algorithm. 

This algorithm contains 3 pointers i.e. low, mid, and high, and 3 main rules.  The rules are the following:

    arr[0….low-1] contains 0. [Extreme left part]
    arr[low….mid-1] contains 1.
    arr[high+1….n-1] contains 2. [Extreme right part], n = size of the array
*/

// Time complexity O(n) and space o(1)


void dutchNationalFlagAlgo(vector<int>&arr,int n){
    int low=0,mid=0,high=n-1;

    while(mid<=high){
        if(arr[mid] == 0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else if(arr[mid]==2){
            swap(arr[mid],arr[high]);
            high--;
        }
    }
    for(auto it:arr) cout<<it<<" ";
    
}


int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    dutchNationalFlagAlgo(arr,n);
    return 0;
}
