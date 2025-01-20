#include<bits/stdc++.h>
using namespace std;

// Find Missing num= [1 3 4 5 6] n=5
// so 2 is missing here you need to find this

// time complexity=> O(n) space=> O(1)
void findMissing(vector<int>&arr1,int n){
    int expectedSum=n*(n+1)/2;
    int actualSum=0;

    for(int it:arr1){
        actualSum+=it;
    }
    cout<< expectedSum - actualSum;
}

// Anotheer optimal approch is using XOR ^ operator

void findMissingNum(vector<int>&arr1,int n){
    int xor1=0;
    int xor2=0;
    // xor all array element
    for(int i=0;i<n;i++){
        xor1=xor1^arr1[i];
    }
    // xor all numbers from 1 to n
    for(int i=0;i<n;i++){
        xor2=xor2^i;
    }
    // now find missing using xor1^xor2
    int missing=xor2^xor1;
    cout<<missing;
}

// for finding all missing num
void findAllMissingNum(vector<int>&arr1,int n){
    unordered_set<int>numSet;
    vector<int>missingNu;

    //insert into set
    for(auto it:arr1) {
        numSet.insert(it);
    }

    // find missing num
    for(int i=1;i<=n;i++){
        if(numSet.find(i)==numSet.end()){
            missingNu.push_back(i);
        }
    }
    
    // print missing num
    for(auto it:missingNu) cout<<it<<" "<<endl;
}

int main(){    
    int n;
    cin>>n;
    vector<int>arr1(n);
    for(int i=0;i<n;i++) cin>>arr1[i];
    // findMissing(arr1,n);
    // findMissingNum(arr1,n);
    findAllMissingNum(arr1,n);
    return 0;
}