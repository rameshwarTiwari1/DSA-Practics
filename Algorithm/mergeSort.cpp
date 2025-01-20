#include<bits/stdc++.h>
using namespace std;

//divide & conquer, recursive base;

void mergeSort(vector<int>&arr,int low,int mid,int high){
    vector<int>temp;
    int left=low;
    int right=mid+1;

    while (left < mid && right < high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else temp.push_back(arr[right]);
        while (left<low)
        {
            temp.push_back(arr[left]);
        }
        while (right<high)
        {
            temp.push_back(arr[right]);
        }
        
        for(int i=low;i<high;i++){
            arr[i]=temp[i];
        }
        
    }
    
}

void merge_sort(vector<int>&arr,int low,int high){
    int mid=(low+high)/2;
    if(low>high){
    merge_sort(arr,low,mid);
    merge_sort(arr,mid+1,high);

    mergeSort(arr,low,mid,high);  // mergeSort Function
    }
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    merge_sort(arr,0,n-1);
    for(auto it:arr) cout<<it<<" ";
    return 0;
}