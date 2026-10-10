class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();

        vector<int> row;
        vector<int> col;

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(matrix[i][j]==0){
                    row.push_back(i);
                    col.push_back(j);
                }
                
            }
        }

        int i=0;

        while(i<row.size()){
            for(int k=0; k<n; k++){
                matrix[k][col[i]]=0;
            }
            for(int l=0; l<m; l++){
                matrix[row[i]][l]=0;
            }
            i++;

        }

        
    }
};