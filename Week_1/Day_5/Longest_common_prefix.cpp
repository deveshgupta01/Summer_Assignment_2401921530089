
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        if(n==1){
            return strs[0];
        }
        sort(strs.begin(),strs.end());
        string first=strs[0];
        int p=first.size();
        string last=strs[n-1];
        int q=last.size();
        string s="";
        for(int i=0;i<min(p,q);i++){
            if(first[i]==last[i]){
                s=s+first[i];
            }
            else{
                return s;
            }
        }
        return s;
    }
};
