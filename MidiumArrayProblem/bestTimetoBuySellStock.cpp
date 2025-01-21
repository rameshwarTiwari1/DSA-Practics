#include<bits/stdc++.h>
using namespace std;
// You need to maximize the profit of buying and selling stock
// Brute Aproch TimeComplexity=> O(n^2) and space O(1)
void buyAndSellStock(vector<int>&arr,int n){
    int maxP=0;
    int buyPrice=0, sellPrice=0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                int profit = arr[j] - arr[i];
                if (profit > maxP) {
                    maxP = profit;
                    buyPrice = arr[i];
                    sellPrice = arr[j];
                }
            }
        }
    }
    cout << "Maximum Profit: " << maxP << endl;
    cout << "Buy Price: " << buyPrice << endl;
    cout << "Sell Price: " << sellPrice << endl;
}

// Optimal aproch
/* Algorithm
You always buy at the lowest price so far (mini).
You calculate the profit based on selling at the current price (arr[i]).
You update the maximum profit (maxP) if the current profit is greater than the previous maximum.
*/
void buySellStock(vector<int>&arr,int n){
    int mini = arr[0]; // Initialize the minimum price to the first element, its our buying price, buying alwas will be lowest price 
    int maxP = 0;      // Initialize the maximum profit to 0

    for (int i = 1; i < n; i++) {
        int cost = arr[i] - mini;    // Calculate the profit if sold today
        maxP = max(maxP, cost);     // Update maximum profit
        mini = min(mini, arr[i]);   // Update the minimum price so far
    }
    cout << "maxProfit: " << maxP;  // Print the maximum profit
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // buyAndSellStock(arr,n);
    buySellStock(arr,n);
    return 0;
}