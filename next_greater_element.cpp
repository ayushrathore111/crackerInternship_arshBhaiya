class Solution {
public:
    //Approach 1: Brute force
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>mp;
        vector<int>ans;
        for(int i=0;i<nums2.size();i++){
            mp[nums2[i]]= i;
        }
        bool flag=false;
        for(auto k: nums1){
            flag=false;
            if(mp[k]==(nums2.size()-1))ans.push_back(-1);
            else{
                for(int i=mp[k]+1;i<nums2.size();i++){
                    if(nums2[i]>k){
                        flag=true;
                        ans.push_back(nums2[i]);
                        break;
                    }
                }
                if(!flag){
                    ans.push_back(-1);
                }
            }
        }
        return ans;
    }
};
