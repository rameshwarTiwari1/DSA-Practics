#include<bits/stdc++.h>
using namespace std;


// Here we again used binary searched aproch to find floor and ceil
// With logrithm of time O(log n)


pair<int,int> floorAndCeil(vector<int>&arr,int n,int target){
    int low=0, high=n-1;
    int floor=-1, ceil=-1;

    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==target){ 
            floor=arr[mid];
            ceil=arr[mid];
            return {floor, ceil};
        }
        else if(arr[mid]<target){
            floor=arr[mid];
            low=mid+1; 
        }
        else{
            ceil=arr[mid];
            high=mid-1;
        }
    }
    return {floor,ceil};
}


int main(){
    int n,target;
    cin>>n>>target;
    vector<int>arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    pair<int,int> result=floorAndCeil(arr,n,target);
    cout<<result.first<<" "<<result.second;
    return 0;
}