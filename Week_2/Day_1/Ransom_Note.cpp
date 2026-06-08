
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int m=ransomNote.size();
        int n=magazine.size();
        sort(ransomNote.begin(),ransomNote.end());
        sort(magazine.begin(),magazine.end());
        int i=0;
        int j=0;
        while(i<m && j<n){
            if(ransomNote[i]==magazine[j]){
                i++;
                j++;
            }
            else if(ransomNote[i]>magazine[j]){
                j++;
            }
            else{
                return false;
            }
        }
        return i==m;
    }
};
