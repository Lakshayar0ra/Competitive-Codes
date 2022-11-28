/**
 * Date - Nov. 28, 2022
 * Problem - 73. Set Matrix Zeroes
 * Tags - Medium
 * Type - Arrays/Striver SDE Sheet
 */

/**
 * Given an integer matrix of size [M x N] -
 * Time Complexity - O(M * N) 
 * Space Complexity - O(1)
 */

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        bool isFirstColZero = false;  // Marker for the first Column to be made zero.
        for(int i = 0; i < rows; i++) {
            if(matrix[i][0] == 0) {
                isFirstColZero = true;
            }
            for(int j = 1; j < cols; j++) {
                if(matrix[i][j] == 0) {
                    matrix[i][0] = 0; // Value of matrix[0][0] will be used to check if first row is to be made zero. 
                    matrix[0][j] = 0;
                }
            }
        }
        for(int i = rows - 1; i >= 0; i--) {
            for(int j = cols - 1; j > 0; j--) {
                if(matrix[0][j] == 0 || matrix[i][0] == 0) {
                    matrix[i][j] = 0;
                }
            }
            if(isFirstColZero) {
                matrix[i][0] = 0;
            }
        }
    }
};