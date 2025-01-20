#include<bits/stdc++.h>
using namespace std;

// This is optimal aproch for finding largest & smallest O(n)
void largestSmallestFind(vector<int>&arr,int n){
    int largest=INT_MIN;
    int smallest=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
        if(arr[i] < smallest) { 
            smallest = arr[i]; 
        }
    }
    cout<<"LargestElement:"<<largest<<endl;
    cout<<"SmallestElement:"<<smallest;
}

// find Largest & smallest and 2-smallest and 2-largest
void findSecondLargestSmallest(vector<int>&arr,int n){
    if (n < 2) {
        cout << "Not enough elements to find second largest and second smallest." << endl;
        return;
    }
    int largest=INT_MIN, second_largest=INT_MIN;
    int smallest=INT_MAX, second_smallest=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            second_largest=largest;
            largest=arr[i];
        }
        else if(arr[i] > second_largest && arr[i] != largest) { 
            second_largest = arr[i]; 
        }
        if(arr[i]<smallest){
            second_smallest=smallest;
            smallest=arr[i];
        }
        else if(arr[i] < second_smallest && arr[i] != smallest) { 
            second_smallest = arr[i]; 
        }
    }
    cout<<"Largest:"<<" "<<largest<<endl;
    cout<<"SeondLargest:"<<" "<<second_largest<<endl;
    cout<<"smallest:"<<" "<<smallest<<endl;
    cout<<"SecondSmallest:"<<" "<<second_smallest;
}


int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    largestSmallestFind(arr,n);
    // findSecondLargestSmallest(arr,n);
    return 0;
}