#include<bits/stdc++.h>
using namespace std;

// [1 1 1 0 2 1 1 1 1 5 6]
// int that array you need to find max consecutive one[1 1 1 1]


void max_consecutiveOne(vector<int>&arr1,int n){
    int maxCount=INT_MIN;
    int currentCount=0;

    for(auto it:arr1){
        if(it==1){
            currentCount++;
            maxCount = max(maxCount, currentCount);  // Update max count
        }
        else {
            currentCount = 0;  // Reset count when 0 is encountered
        }
    }
    cout<<maxCount;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr1(n);
    for(int i=0;i<n;i++) cin>>arr1[i];
    max_consecutiveOne(arr1,n);
    return 0;
}