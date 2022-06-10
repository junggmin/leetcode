class NumMatrix {
public:
    int num[201][201]={0};
    NumMatrix(vector<vector<int>>& matrix) {
        for(int i=1;i<=matrix.size();i++){
            for(int j=1;j<=matrix[0].size();j++){
                num[i][j] = matrix[i-1][j-1]+num[i-1][j]+num[i][j-1]-num[i-1][j-1];
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        return num[row2+1][col2+1]-num[row2+1][col1]-num[row1][col2+1]+num[row1][col1];
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */