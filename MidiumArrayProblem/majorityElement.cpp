#include<bits/stdc++.h>
using namespace std;

// Brute Approch
// Time complexity= O(n^2) Space = O(1)
void majorityElement(vector<int>&arr,int n){
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]) cnt++;
        }
        if(cnt>n/2) cout<<arr[i];
        return;
    }
    cout<<"no element found";
}

// Better Approch
// Time complexity= O(log n) when space O(n)
void majorityElementFind(vector<int>&arr,int n){
    map<int,int>mpp;
    // store elent with freq in map
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    // check majority element
    for(auto it:mpp){
        if(it.second>(n/2)){
            cout<<it.first;
            return;
        }
    }
    cout<<"No element found";
}

// Optimal Approch==  Using Moore's Voting Algorithm(Only finding for majority Element)
// use when majority element is exist
// Time complexity= O(n) space O(1).

void mooresVotingAlgo(vector<int>&arr,int n){
    int ele;
    int cnt=0;
    for(int i=0;i<n;i++){
        if(cnt==0){
            ele=arr[i];
        }
        if(arr[i]==ele){
            cnt++;
        }
        else{
            cnt--;
        }
    }
    int cnt1=0;
    for(int i=0;i<n;i++){
        if(arr[i]==ele) cnt1++;
    }   
     if (cnt1 > n / 2) {
        cout << "Majority Element: " << ele << endl;
    } else {
        cout << "No Majority Element found" << endl;
    }
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // majorityElement(arr,n);
    // majorityElementFind(arr,n);
    mooresVotingAlgo(arr,n);
    return 0;
}