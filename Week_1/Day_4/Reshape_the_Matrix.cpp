
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m=mat.size();
        int n=mat[0].size();
        vector<vector<int>> v(r, vector<int>(c));
        if(m*n!=r*c){
            return mat;
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int idx=n*i+j;
                v[idx/c][idx%c]=mat[i][j];
            }
        }
        return v;
    }
};
