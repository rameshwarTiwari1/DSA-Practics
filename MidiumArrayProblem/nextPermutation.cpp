#include<bits/stdc++.h>
using namespace std;

/*
nums = [1, 2, 3]
ouput= [1, 3, 2]
approach will only generate the next permutation
*/

void nectPermutation(vector<int>&arr,int n){
    int index=-1;
    // Step 1: Find the largest index 'i' such that nums[i] < nums[i + 1]
    for(int i=n-2;i>=0;i--){
        if(arr[i]<arr[i+1]){
            index=i;
            break;
        }
    }
    // Step 2: If no such index exists, the array is in descending order, so reverse it
    if(index==-1){
        reverse(arr.begin(),arr.end());
        return;
    }
    // Step 3: Find the largest index 'j' such that nums[j] > nums[index]
    for(int i=n-1;i>index;i--){
        if(arr[i]>arr[index]){
            swap(arr[i],arr[index]);
            break;
        }
    }
    // Step 4: Reverse the elements after the 'index' to get the next permutation
    reverse(arr.begin()+ index +1 , arr.end());
    return;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    nectPermutation(arr,n);
    for(auto it:arr) cout<<it<<" ";
    return 0;
}