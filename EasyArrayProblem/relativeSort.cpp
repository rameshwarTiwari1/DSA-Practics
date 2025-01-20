#include <iostream>
#include <vector>
using namespace std;

vector<int> relativeSort(vector<int> &ARR, vector<int> &BRR) {

   vector<int>result;
   vector<int> remaining;

    for(int i=0;i<ARR.size();i++){
        for(int j=0;j<BRR.size();j++){
            if(ARR[i]==BRR[j]){
                result.push_back(ARR[i]);
            }
        }
    }

    // store element from arr that are not present in brr
    for(int i=0;i<ARR.size();i++){
        for(int j=0;j<BRR.size();j++){
            if(ARR[i]!=BRR[j]){
                remaining.push_back(ARR[i]);
            }
        }
    }


    // sort the remaining element
    for(int i=0;i<remaining.size();i++){
        for(int j=i+1;j<remaining.size();j++){
            if(remaining[i]>remaining[j]){
                swap(remaining[i],remaining[j]);
            }
        }
    }

    // Append the sorted remaining elements to the result
    for(int i=0;i<remaining.size();i++){
        result.push_back(remaining[i]);
    }
    return result;
}

int main() {
    vector<int> ARR = {9, 5, 8, 4, 6, 5};
    vector<int> BRR = {8, 4, 5};

    vector<int> sortedArray = relativeSort(ARR, BRR);

    cout << "Sorted array: ";
    for (int i = 0; i < sortedArray.size(); i++) {
        cout << sortedArray[i] << " ";
    }
    cout << endl;

    return 0;
}
