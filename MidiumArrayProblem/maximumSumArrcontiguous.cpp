#include<bits/stdc++.h>
using namespace std;

// Q=> Find Maximum sum of contigious subArray

// Kadens algorithm optimal approch for O(n) space O(1)
int kadanesAlgoMajority(vector<int>&arr,int n){
    int maxSum=INT_MIN;
    int currentSum=0;
    for(int i=0;i<n;i++){
        currentSum+=arr[i];
        maxSum=max(maxSum,currentSum);
    }
    if(currentSum<0){
        // reset currentSum if its negative
        currentSum=0;
    }
    return maxSum;
}

// Brute Approch O(n^2)
int maximumSumContiguous(vector<int>&arr,int n){
    int maxSum=INT_MIN;
    for(int i=0;i<n;i++){
        int currentSum=0;
        for(int j=i;j<n;j++){
                currentSum+=arr[j];
                maxSum=max(maxSum,currentSum);
            }
        }
    return maxSum;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    // cout<<maximumSumContiguous(arr,n);
    cout<<kadanesAlgoMajority(arr,n);
    return 0;
}