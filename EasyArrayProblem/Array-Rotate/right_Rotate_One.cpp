#include<bits/stdc++.h>
using namespace std;

// in right rotate one place===> the last element of the array is moved to the front,
//  and all other elements are shifted one position to the right.


void rightRotateOnePlace(vector<int>&arr,int n){
    int last=arr[n-1];

    if(n==0) return;
    for(int i=n-1;i>0;i--){
        arr[i]=arr[i-1];       //shift element to right
    }
    arr[0]=last;  //place last element to front
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    rightRotateOnePlace(arr,n);
    for(auto it:arr){
        cout<<it<<" ";
    }
    return 0;
}

// 1 2 3 4 5
//right rotate one =  5 1 2 3 4
