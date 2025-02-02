#include<bits/stdc++.h>
using namespace std;

// Brute Aproch Time COmplexity=  O(m*n)
// We traverse the matrix twice:
        // Once to identify rows and columns to zero.
        // Once to set the rows and columns to zero.
/*
3 3
1 1 1
1 0 1
1 1 1
ouput will be: The modified 2D matrixay is:
1 0 1
0 0 0 
1 0 1

*/
void setMatrixZero(vector<vector<int>> &matrix,int n,int m){
     // Use sets to store rows and columns to be zeroed
    unordered_set<int>setRowZero;
    unordered_set<int>setColumnZero;

     // Step 1: Identify rows and columns to zero
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==0){
                setRowZero.insert(i);
                setColumnZero.insert(j);
            }
        }
    }

    // Step 2: Set rows to zero
    for (int row : setRowZero) {
        for (int j = 0; j < m; j++) {
            matrix[row][j] = 0;
        }
    }

    // Step 3: Set columns to zero
    for (int col : setColumnZero) {
        for (int i = 0; i < n; i++) {
            matrix[i][col] = 0;
        }
    }
}


// Better Aproch
// Space Complexity= O(n + m).
void setMatrixZeros(vector<vector<int>> &matrix){
   int n = matrix.size();    // Number of rows
        int m = matrix[0].size(); 

        vector<int> row(n, 0);    // Row marker matrixay, initialized to 0
        vector<int> col(m, 0); 

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    row[i]=1;
                    col[j]=1;
                }
            }
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(row[i] == 1 || col[j] == 1){
                    matrix[i][j]=0;
                }
            }
        }
        
}

// Optimal Aproch

int main(){
    // 2 D matrixay from user
    int n,m;
    cin>>n>>m;
    vector<vector<int>> matrix(n, vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }
    // setMatrixZero(matrix,n,m);
    setMatrixZeros(matrix);

     cout << "The modified 2D matrixay is:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}