#include<bits/stdc++.h>
using namespace std;

// find the element that sum=targetSum
// ex= [1 2 3 4 5 6 7 8 9] targetsum= 14,  so you need find two element in array that sum=14
// Brute Approch Time Complexity=> O(n^2) coz two nested loop runinng n times
void findElemetThatSumTarget(vector<int>&arr,int targetSum){
    int n=arr.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]) continue;
            if(arr[i]+arr[j]==targetSum){
                cout<<"Yes"<<endl;
                cout<<i<<" "<<j;
                return;
            }
        }
    }
    cout<<"No";
}

// Better Approch ======= Time Complexity== O(n); and space O(n) coz required extra space to store map
void findElementSum(vector<int>&arr,int targetSum){
    unordered_map<int,int>maps;
    int n=arr.size();
    bool found=false;
    for(int i=0;i<n;i++){
        int a=arr[i];
        int value=targetSum-a;
        if(maps.find(value)!=maps.end()){
            cout<<arr[i]<<" "<<value<<"\n";
            found=true;
            break;
        }
        maps[a]=i;
    }
    if(!found) cout<<"No";
}

int main(){
    int n,targetSum;
    cin>>n>>targetSum;
    vector<int>arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    // findElemetThatSumTarget(arr,targetSum);
    findElementSum(arr,targetSum);
    return 0;
}