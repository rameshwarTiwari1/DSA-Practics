// The code and logic will be same as lower bound
// so if you know lower bound you can solve many problem

/*
The lower bound of an element x in a sorted array is the first index where x is greater than or equal to the element.
This is exactly what we need for the Search Insert Position problem.
*/


#include<bits/stdc++.h>
using namespace std;

int serchInsertPosition(vector<int>&arr,int n,int target){
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
    return ans; // this will return index where lower bound should be or position where search insert
}


int main(){
    int n,target;
    cin>>n>>target;
    vector<int>arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    int lower = serchInsertPosition(arr, n, target);
    cout << "The SerchInsertPosition: " << lower << endl;
}