/* Approach using temprows and tempcols*/
class Solution
{
public:
    void solver(int rows, int cols, vector<vector<int>> &matrix)
    {
        vector<bool> temp_col(rows, true), temp_row(cols, true);
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                if (matrix[i][j] == 0)
                {
                    temp_row[i] = 0;
                    temp_col[j] = 0;
                }
            }
        }
        for (int i = 0; i < rows; i++)
        {
            if (temp_row[i] == 0)
            {
                for (int k = 0; k < cols; k++)
                {
                    matrix[i][k] = 0;
                }
            }
        }
        for (int j = 0; j < cols; j++)
        {
            if (temp_col[j] == 0)
            {
                for (int k = 0; k < rows; k++)
                {
                    matrix[k][j] = 0;
                }
            }
        }
        return;
    }

    void setZeroes(vector<vector<int>> &matrix)
    {
        int rows = matrix.size();
        int cols = matrix[0].size();
        solver(rows, cols, matrix);
    }
};





