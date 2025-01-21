#include<bits/stdc++.h>
using namespace std;

void recursivePermutation(vector<int>& ds, vector<int>& nums, vector<vector<int>>& ans, vector<int>& freq){
    int n1=ds.size();
    int n2= nums.size();
    // Base case: if the current permutation is complete, add it to the result
    if(n1==n2){
        ans.push_back(ds);
        return;
    }
     // Try each element in nums
     for (int i = 0; i < n2; i++) {
        // Skip if the element is already used
        if (freq[i]) continue;

        // Mark the element as used
        freq[i] = 1;

        // Add the current element to the permutation
        ds.push_back(nums[i]);

        // Recurse call function to generate the next element of the permutation
        recursivePermutation(ds, nums, ans, freq);

        // Backtrack: undo the choice
        freq[i] = 0;
        ds.pop_back();
    }
}


vector<vector<int>>permute(vector<int>&nums){
    int n=nums.size();
    vector<vector<int>>ans;
    vector<int>ds; //current permutation
    vector<int>freq(n,0);
    recursivePermutation(ds,nums,ans,freq);
    return ans;
}


int main(){
    vector<int>nums={1,2,3};
    vector<vector<int>>result=permute(nums);  //2d vector for storing result
    // vector is used here coz direct access to element
    // print result of 2d vector that why 2 loop
    for(auto &perm:result){
        for(auto it: perm){
            cout<<it<<" ";
        }
        cout<<endl;
    }
    return 0;
}