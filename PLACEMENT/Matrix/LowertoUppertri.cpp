// C++ program for the above approach
 
#include <bits/stdc++.h>
using namespace std;
 
// Function to swap laterally inverted
// images of upper and lower triangular
// halves of a given matrix
void ReverseSwap(vector<vector<int> >& mat, int n)
{
    // Store the matrix elements from
    // upper & lower triangular halves
    vector<int> lowerEle[n];
    vector<int> upperEle[n];
 
    int index;
 
    // Traverse the matrix mat[][]
    for (int i = 0; i < n; i++) {
 
        for (int j = 0; j < n; j++) {
 
            // Find the index
            index = abs(i - j);
 
            // If current element lies
            // on the principal diagonal
            if (i == j) {
                continue;
            }
 
            // If current element lies
            // below the principal diagonal
            else if (j < i) {
                lowerEle[index].push_back(
                    mat[i][j]);
            }
 
            // If current element lies
            // above the principal diagonal
            else {
                upperEle[index].push_back(
                    mat[i][j]);
            }
        }
    }
 
    // Traverse again to swap values
    for (int i = 0; i < n; i++) {
 
        for (int j = 0; j < n; j++) {
 
            // Find the index
            index = abs(i - j);
 
            // Principal diagonal
            if (i == j) {
                continue;
            }
 
            // Below main diagonal
            else if (j < i) {
 
                mat[i][j] = upperEle[index].back();
                upperEle[index].pop_back();
            }
 
            // Above main diagonal
            else {
                mat[i][j] = lowerEle[index].back();
                lowerEle[index].pop_back();
            }
        }
    }
 
    // Traverse the matrix and print
    for (int i = 0; i < n; i++) {
 
        for (int j = 0; j < n; j++) {
 
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}
 
// Driver Code
int main()
{
    // Given Matrix mat[][]
    vector<vector<int> > mat = { {1,2,3,4},
                                 {5,6,7,8 },
                                 {9,1,2,4},
                                 {4,5,6,7}, };
 
    int N = mat.size();
 
    // Swap the upper and lower
    // triangular halves
    ReverseSwap(mat, N);
 
    return 0;
}