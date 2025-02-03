#include<bits/stdc++.h>
using namespace std;

int lowerBound(vector<int>&arr,int n,int target){
    int low=0,high=n-1;
    int ans=n;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]>=target){ // maybe this can be answer
            ans=mid;
            high=mid-1; //look for more small index on left
        }
        else{
            low=mid+1; //look for more right
        }
    }
    return ans; // this will return index where lower bound should be
}

// Upper Bound
int upperBound(vector<int>&arr,int n,int target){
    int low=0,high=n-1;
    int ans=n;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]>target){ // maybe this can be answer
            ans=mid;
            high=mid-1; //look for more small index on left
        }
        else{
            low=mid+1; //look for more right
        }
    }
    return ans; // this will return index where lower bound should be
}

int main(){
    int n,target;
    cin>>n>>target;
    vector<int>arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    int lower = lowerBound(arr, n, target);
    cout << "The LowerBound: " << lower << endl;
    
    int upper = upperBound(arr, n, target);
    cout << "The UpperBound: " << upper << endl;
    return 0;
}