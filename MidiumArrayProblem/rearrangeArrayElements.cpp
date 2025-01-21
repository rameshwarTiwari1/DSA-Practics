#include<bits/stdc++.h>
using namespace std;

/*
nums = [3, 1, -2, -5, 2, -4]
ouput= [3, -2, 1, -5, 2, -4]

TimeComplexity= O(n)
SpaceComplexity= O(n) coz extra space used for storing ans value thats why
*/

vector<int> rearrangeArrayEle(vector<int>&arr,int n){
    vector<int>ans(n,0);
    int positiveInde=0, negativeInde=1;

    for(int i=0;i<n;i++){
         // if element is > than 0 its positive & if element < 0 its negative
        if(arr[i] > 0){    
            ans[positiveInde]=arr[i];
            positiveInde+=2; // 0 2 4 6... for store positive ele at even index
        }
        else{
            ans[negativeInde]=arr[i];
            negativeInde+=2; // 1 3 5 7... for store negative ele at odd index
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
     vector<int> result =rearrangeArrayEle(arr,n);
    for(auto it:result) cout<<it<<" ";
    return 0;
}