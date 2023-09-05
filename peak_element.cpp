// Input: nums = [1,2,3,1]
// Output: 2
// Explanation: 3 is a peak element and your function should return the index number 2.
// Example 2:
// Input: nums = [1,2,1,3,5,6,4]
// Output: 5
// Explanation: Your function can return either index number 1 where the peak element is 2, or index number 5 where the peak element is 6.

// approach 1:
int findPeakElement(vector<int>& nums) {
        if(nums.size()<=1)return 0;
        if(nums.size()==2){
            if(nums[0]>nums[1])return 0;
            else return 1;
        }
        for(int i=1;i<nums.size()-1;i++){
            if(nums[i]>nums[i-1]&& nums[i]>nums[i+1])return i;
        }
        int val= *max_element(nums.begin(),nums.end());
        if(val==nums[nums.size()-1])return nums.size()-1;
        return 0;
    }
// approach 2:
 int findPeakElement(vector<int>& nums) {
    int n=nums.size();
    if(n==1)
    {
      return 0;
    } 
    if(nums[0]>nums[1])
    {
      return 0;
    }
    if(nums[n-1]>nums[n-2])
    {
      return n-1;
    }
    int left=1;
    int right=n-2;
    while(left<=right)
    {
      int mid=(left+right)/2;
      if(nums[mid]>nums[mid-1]&& nums[mid]>nums[mid+1])
      {
        return mid;
      }
      else if(nums[mid]>nums[mid-1])
      {
        left=mid+1;
      }
      else{
        right=mid-1;
      }
    }
return -1;
    }
