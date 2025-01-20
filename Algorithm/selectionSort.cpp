#include<bits/stdc++.h>
using namespace std;

// Select min or max element & push it to its correct order
/* In selection SOrt outer loop run n-2 times coz when you, 
by the time you've placed the second-to-last element in its correct 
position, the last element is already sorted. */


void selection_Sort(vector<int>&arr,int n){
    for(int i=0;i<=n-2;i++){
        int mini=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[mini]){
                mini=j;
            }
        swap(arr[i],arr[mini]);
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
    selection_Sort(arr,n);
    for(auto it:arr) cout<<it<<" ";
    return 0;
}