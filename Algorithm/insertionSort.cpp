#include<bits/stdc++.h>
using namespace std;

//InsertionSOrt, it will push the element to its correct order,
// loop will start at 1th element position in insertion sort 0th index elemenet consider as a sorted

void insertion_sort(vector<int>&arr,int n){
    for(int i=1;i<n;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
        swap(arr[j],arr[j-1]);
        j--;
        }
    }
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    insertion_sort(arr,n);
    for(auto it:arr) cout<<it<<" ";
    return 0;
}