double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        for(int i=0;i<nums2.size();i++){
            nums1.push_back(nums2[i]);
        }
        // double ans=0;
        sort(nums1.begin(),nums1.end());
        if(nums1.size()%2==0){
            cout<<nums1[nums1.size()/2]<<" "<<nums1[(nums1.size()/2)-1]<<endl;
            double ans= (nums1[nums1.size()/2] +nums1[(nums1.size()/2)-1])/2.0;
            cout<<ans<<endl;
            return ans;
        }else{
            return nums1[nums1.size()/2];
        }
        // return ans;
        return 0;
    }

/*
Input: nums1 = [1,3], nums2 = [2]
Output: 2.00000
Explanation: merged array = [1,2,3] and median is 2.
Example 2:

Input: nums1 = [1,2], nums2 = [3,4]
Output: 2.50000
Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5. */
