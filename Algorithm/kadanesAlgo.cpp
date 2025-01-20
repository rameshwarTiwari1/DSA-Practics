#include<bits/stdc++.h>
using namespace std;

/*
 This algo is used to find Maximum sum in contigious
 subArray
 Ex- 1 -1 1 -1 1 2 4 3 -4 maxSum=10

*/
// Time COmplexity=> O(n) Space O(1)

int kadensAlgo(vector<int>&arr,int n){
    int maxSum=INT_MIN;
    int currentSum=0;
    for(int i=0;i<n;i++){
        currentSum+=arr[i];
        maxSum=max(maxSum,currentSum);
    }
    if(currentSum<0){
        // reset current sum if its negative
        currentSum=0;
    }
    return maxSum;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<kadensAlgo(arr,n);
    return 0;
}