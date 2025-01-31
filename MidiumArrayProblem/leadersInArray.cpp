#include<bits/stdc++.h>
using namespace std;

// Brute Aproch for finding leader. 
// leader element always will be greater that it right side all element
// last element of array always will be leader
//  13 14 3 8 2 ouput 14 8 2
// time complexity near about O(n^2) and space O(1)
vector<int> findLeaders(vector<int> &arr, int n) { 
    vector<int> ans; 
    for (int i = 0; i < n; i++) { 
        bool leader = true; 
        for (int j = i + 1; j < n; j++) { 
            if (arr[j]>arr[i]) { 
                leader = false; 
                break; 
            } 
        } 
        if (leader==true) { 
            ans.push_back(arr[i]); 
        } 
    } 
    return ans; 
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>result=findLeaders(arr,n);
    for(auto it:result) cout<<it<<" ";
    return 0;
}