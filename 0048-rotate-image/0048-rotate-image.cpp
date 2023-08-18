class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix[0].size();
        vector<vector<int>> temp;
        for(int i = 0; i< n; ++i)
        {
            vector<int> tt;
            for(int j = n-1; j >=0; j--)
            {
                tt.push_back(matrix[j][i]);
            }
            temp.push_back(tt);
        }

        matrix = temp;
    }
};