#include<bits/stdc++.h>
using namespace std;

void findDuplicate(vector<int>&arr,int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                cout<<arr[i]<<" ";
            }
        }
    }
    return;
    cout<<"No Duplicate Found!";
}

int main(){

    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
   findDuplicate(arr,n);
    return 0;
}