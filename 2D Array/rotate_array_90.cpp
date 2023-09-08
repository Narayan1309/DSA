//Rotate Image 90 degree
//Rotate array 90 degree
// https://leetcode.com/problems/rotate-image/description/

class Solution {
public:
    /*
    Step 1: Swapping through the diagonal
    
    1 2 3               1 4 7
    4 5 6       ----->  2 5 8
    7 8 9               3 6 9
    
    Step 2: Swapping through the mid column
        
    1 4 7               7 4 1
    2 5 8       ----->  8 5 2
    7 8 9               9 6 3
    
    */
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<(int)n/2;j++){
                swap(matrix[i][j], matrix[i][n-j-1]);
            }
        }
    }
};
