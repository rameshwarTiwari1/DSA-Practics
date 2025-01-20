#include<bits/stdc++.h>
using namespace std;

// Intersection => Find elements common in both arrays.
// Example: [1 2 3 4 5 5 9 1 2 6] & [1 2 5 6 4 2 1 5 7]
// Intersection (unique, sorted) = [1 2 4 5 6]
// Time Complexity: O(n log k), where k is the size of the intersection.

// Optimal aproch time complexity=> O(n log k)

void findIntersection(vector<int>&arr1,vector<int>&arr2,int n){
    // Use a set to store unique elements from the first array
    unordered_set<int>elements(arr1.begin(),arr1.end());

    set<int>intersectionResult;

    // Use a set to store unique elements from the first array
    for(auto it:arr2){
        if(elements.find(it)!=elements.end()){
            intersectionResult.insert(it);
        }
    }

    // now print result
    for(auto it:intersectionResult) cout<<it<<" ";
}

int main(){
     int n;
    cin>>n;
    vector<int>arr1(n);
    for(int i=0;i<n;i++) cin>>arr1[i];
    vector<int>arr2(n);
    for(int i=0;i<n;i++) cin>>arr2[i];
    findIntersection(arr1,arr2,n);
    return 0;
}