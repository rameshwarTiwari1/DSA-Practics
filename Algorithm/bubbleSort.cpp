#include<bits/stdc++.h>
using namespace std;

//Bubble SOrt, select max element and push to end of array by adjacent swap.

void bubble_sort(vector<int>&arr,int n){
    for(int i=n-1;i>0;i--){
        for(int j=0;j<i;j++){
            if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            }
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
    bubble_sort(arr,n);
    for(auto it:arr) cout<<it<<" ";
    return 0;
}