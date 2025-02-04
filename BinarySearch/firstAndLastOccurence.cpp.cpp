// Find the First index and Last index occurence of element;
// we can use lowerBound+upperBound to get this O(log n) this is optimal
// For Brute we can use simpley linear search with O(n) this is not optimal

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

pair<int,int>firstAndLastOccurrence(vector<int>&arr,int n,int target){
    int lb = lowerBound(arr, n, target);
    if (lb == n || arr[lb] != target) return {-1, -1}; // Target not found

    int lastIndex = upperBound(arr, n, target) - 1;
    return {lb, lastIndex};
}


//  we can also achive this without implementing upper&lower bound
// we can use simpley Binary search aproch from scratch first for floor and then ceil
int firstOccurence(vector<int>&arr,int n,int target){
    int low=0, high=n-1;
    int first=-1;

    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==target){
            first=mid;
            high=mid-1;
        }
        else if(arr[mid]<target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return first;
}
// find last occurence
int lastOccurence(vector<int>&arr,int n,int target){
    int low=0, high=n-1;
    int last=-1;

    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==target){
            last=mid;
            low=mid+1;
        }
        else if(arr[mid]<target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return last;
}
pair<int,int> findFirstAndLastOccureence(vector<int>&arr,int n,int target){
    int first=firstOccurence(arr,n,target);
    if(first==-1) return {-1, -1};
    int last=lastOccurence(arr,n,target);
    return {first,last};
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

    pair<int, int> result =  firstAndLastOccurrence(arr,n,target);
    cout << "First Occurrence: " << result.first << " Last Occurrence: " << result.second << endl;

    pair<int, int> withoudUpperLowerBound =  findFirstAndLastOccureence(arr,n,target);
    cout << "First Occurrence: " << withoudUpperLowerBound.first << " Last Occurrence: " << withoudUpperLowerBound.second << endl;


    return 0;
}