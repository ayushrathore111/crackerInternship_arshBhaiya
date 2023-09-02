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

    //Approach 2: using stack
vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp;
        stack<int> st;
        for(int i=nums2.size()-1;i>=0;i--){
            while(!st.empty() && nums2[i]>st.top()){
                st.pop();
            }
            if(!st.empty()){
                mp[nums2[i]]=st.top();
            }
            else{
                mp[nums2[i]]=-1;
            }
            st.push(nums2[i]);
        }
        for(int i=0;i<nums1.size();i++){
            nums1[i]=mp[nums1[i]];
        }
        return nums1;
}
};
