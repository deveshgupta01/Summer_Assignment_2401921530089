
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        vector<int>v;
        for(int i=0;i<m;i++){
            int a=0;
            for(int j=0;j<n;j++){
                if(nums1[i]==nums2[j]){
                    a=1;
                    for(int k=j+1;k<n;k++){
                        if(nums1[i]<nums2[k]){
                            a=2;
                            v.push_back(nums2[k]);
                            break;
                        }
                    }
                if(a==1){
                    v.push_back(-1);
                    break;
                }
                }
            }
        }
        return v;
    }
};
