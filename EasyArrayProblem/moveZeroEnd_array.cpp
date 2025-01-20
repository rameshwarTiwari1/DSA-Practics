#include<bits/stdc++.h>
using namespace std;

// this is brute approch and time complexity= O(3n) which can optimze up to O(2n)
void moveAllzeroToEndofArray(vector<int>&arr,int n){
    vector<int>temp;

    // store all zero in temp
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            temp.push_back(arr[i]);
        }
    }

    int n1=temp.size();
    // Copy non-zero elements back to arr
    for(int i=0;i<n1;i++){
        arr[i]=temp[i];
    }

    // Fill the rest of the array with zeros
    for(int i=n1;i<n;i++){
        arr[i]=0;
    }


}



//  Optimal Approch timeCoplexity= O(n) and space O(1);
void moveAllZeroEnd(vector<int>&arr,int n){
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            arr[j]=arr[i];
            j++;
        }
    }
    while(j<n){
        arr[j]=0;
        j++;
    }
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // moveAllzeroToEndofArray(arr,n);
    // for(auto it:arr) cout<<it<<" ";

    moveAllZeroEnd(arr,n);
    for(auto it:arr) cout<<it<<" ";

    return 0;
}