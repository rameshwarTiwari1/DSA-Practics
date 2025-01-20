#include<bits/stdc++.h>
using namespace std;

// Time COmplex O(nlogn) and space O(n)
void removeDuplicate(vector<int>&arr,int n){
    set<int>sets;
    for(int i=0;i<n;i++){
        sets.insert(arr[i]);
    }

    arr.clear();
    for(auto it:sets) arr.push_back(it);

}

// Optimal Aproch time complexity=>  O(n) space O(1) 
//  This Aproch optimal will be for only sorted array O(n)
void removeDuplicateElements(vector<int>&arr,int n){
    int i=0;
    for(int j=1;j<n;j++){
        if(arr[i]!=arr[j]){
            i++;
            arr[i]=arr[j];
        }
    }
    arr.resize(i+1);
}
//  Optimal aproch for unsorted array we can use hash set O(n)
void removeDuplicateEleme(vector<int>&arr,int n){
    unordered_set<int>seen;
    int i=0;
    for(int j=0;j<n;j++){
        if(seen.find(arr[j])==seen.end()){
            seen.insert(arr[j]);
            arr[i++]=arr[j];
        }
    }
    arr.resize(i);
}

int findDuplicate(vector<int> &arr) 
{
    int n=arr.size();
	for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                cout<<arr[i]<<" ";
                break;
            }
        }
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // removeDuplicateEleme(arr,n);
    findDuplicate(arr);
    // for(auto it:arr) cout<<it<<" ";
    return 0;
}