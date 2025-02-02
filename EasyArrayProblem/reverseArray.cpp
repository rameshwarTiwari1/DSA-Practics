#include<bits/stdc++.h>
using namespace std;

// 1 2 3 4 5
// ouput= 5 4 3 2 1

void reverseNum(vector<int>&arr,int n){
    for(int i=0;i<n/2;i++){
        int temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
        // swap(arr[i],arr[n-i-1]);
    }
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    reverseNum(arr,n);
    for(int i=0;i<n;i++) cout<<arr[i] <<" ";
    return 0;
}