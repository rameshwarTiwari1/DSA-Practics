#include<bits/stdc++.h>
using namespace std;

/*The total number of iterations is:
n+count0+count1+count2
n+count0+count1+count2 Since count0+count1+count2=ncount0+count1+count2=n (the total number of elements in the array), the total becomes:
n+n=2n
n+n=2n
so total time complexity=> Big of O remove constant so total timecomplex= O(n)
*/

void sortOneZeroTwo(vector<int>&arr,int n){
    int count0=0,count1=0,count2=0;

    for(int i=0;i<n;i++){
        if(arr[i]==0) count0++;
        else if(arr[i]==1) count1++;
        else if(arr[i]==2) count2++;
    }

    for(int i=0;i<count0;i++){
        arr[i]=0;
    }

    for(int i=count0;i<count0+count1;i++){
        arr[i]=1;
    }

    for(int i=count0+count1;i<n;i++){
        arr[i]=2;
    }

    for(auto it:arr) cout<<it<<" ";
}






int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    sortOneZeroTwo(arr,n);
    return 0;
}
