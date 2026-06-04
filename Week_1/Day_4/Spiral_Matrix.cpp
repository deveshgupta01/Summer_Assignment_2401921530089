
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int minc=0;
        int minr=0;
        int m=matrix.size();
        int n=matrix[0].size();
        int maxc=n-1;
        int maxr=m-1;
        vector<int>v;
        while(minc<=maxc && minr<=maxr){
            // right
            for(int j=minc;j<=maxc;j++){
                v.push_back(matrix[minr][j]);
            }
            minr++;
            if(minc>maxc || minr>maxr){
                break;
            }
            // down
            for(int i=minr;i<=maxr;i++){
                v.push_back(matrix[i][maxc]);
            }
            maxc--;
            if(minc>maxc || minr>maxr){
                break;
            }
            // left
            for(int j=maxc;j>=minc;j--){
                v.push_back(matrix[maxr][j]);
            }
            maxr--;
            if(minc>maxc || minr>maxr){
                break;
            }
            // top
            for(int i=maxr;i>=minr;i--){
                v.push_back(matrix[i][minc]);
            }
            minc++;
        }
        return v;
    }
};
