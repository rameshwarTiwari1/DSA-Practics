#include<bits/stdc++.h>
using namespace std;

int partitionIndex(vector<int>&arr,int low,int high){
    int pivot=arr[low];
    int i=low;
    int j=high;

    while(i<j){ // Base condition i & j cross stop
        while (arr[i]<=pivot && i<=high-1) //swap& chcek i doesnt exceeded array boundary
        {
            i++;
        }
        while (arr[j]>pivot && j>=low+1)//swap& chcek j doesnt exceeded array boundary
        {
            j--;
        }
        if(i<j) swap(arr[i],arr[j]);
    }
    // swapint pivot(choosen elemnet) to last left ele j
    swap(arr[low],arr[j]);
    return j;
}

void quick_sort(vector<int>&arr,int low,int high){
    if(low<high){
        int parIndex=partitionIndex(arr,low,high);
        quick_sort(arr,low,parIndex-1);
        quick_sort(arr,parIndex+1,high);
    }
}


int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    quick_sort(arr,0,n-1);
    for(auto it:arr) cout<<it<<" ";
    return 0;
}