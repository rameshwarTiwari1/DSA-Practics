#include<bits/stdc++.h>
using namespace std;

// Find num that appeare one time only

void findNumAppearence(vector<int>&arr,int n){
    int hash[13]={0};
    for(auto it:arr){
        hash[it]++;
    }
    bool found=false;
    for(auto it:arr){
        if(hash[it]==1){
            cout<<it<<" ";
            found=true;
        }
    }
    if(!found) cout<<"no enements";
    return;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    findNumAppearence(arr,n);
    return 0;
}