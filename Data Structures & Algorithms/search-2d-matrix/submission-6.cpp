class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i = 0;
        int j = matrix[0].size() - 1;

        while (i < matrix.size() && matrix[i][j] < target)
        {
            ++i;
        }
        
        if (i == matrix.size()) 
        {
            // target is larger than all elements
            return false;
        }        
        int row = i;
        int left = 0;
        int right = j;
        
        while (left <= right)
        {
            int mid = left + ((right - left) / 2);
            if (matrix[row][mid] == target)
            {
                return true;
            }

            if (matrix[row][mid] < target)
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }

        return false;
    }
};
