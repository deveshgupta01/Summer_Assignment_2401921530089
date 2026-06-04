
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        int sum=0;
        for(int i=0;i<m;i++){
            sum=sum+mat[i][i];
            sum=sum+mat[i][n-1-i];
        }
        if(m%2==1){
            sum=sum-mat[m/2][m/2];
        }
        return sum;
    }
};
