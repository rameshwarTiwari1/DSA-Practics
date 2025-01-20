/*
Approach: 
    Initialize 2 variables:
    Count –  for tracking the count of element
    Element – for which element we are counting
    Traverse through the given array.
        If Count is 0 then store the current element of the array as Element.
        If the current element and Element are the same increase the Count by 1.
        If they are different decrease the Count by 1.
    The integer present in Element should be the result we are expecting 
*/

/*
The Moore's Voting Algorithm is an efficient algorithm to find the majority element in an array. 
A majority element is an element that appears more than n/2 times in the array, 
where n is the size of the array.
*/
// Time complextiy O(n) space O(1)

#include<bits/stdc++.h>
using namespace std;
void mooresVotingAlgo(vector<int>&arr,int n){
    int element;
    int count=0;
    for(int i=0;i<n;i++){
        if(count==0){
            element=arr[i];
        }
        if(arr[i]==element){
            count++;
        }
        else if(arr[i]!=element){
            count--;
        }
    }
    int count1=0;
    for(int i=0;i<n;i++){
        if(arr[i]==element) count1++;
    }
    // now check majority element > n/2
    // Check if the candidate is the majority element
    if (count1 > n / 2) {
        cout << "The majority element is: " << element << endl;
    } else {
        cout << "No majority element found." << endl;
    }
}


int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    mooresVotingAlgo(arr,n);
    return 0;
}