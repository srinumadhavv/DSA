class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<int>ans;
        int n = nums.size();
        int left=0,right=n-1;
        while(left<right){
            if(nums[left]+nums[right]==target){
                ans.push_back(nums[left]);
                ans.push_back(nums[right]);
                return ans;
            }else if(nums[left]+nums[right]<target){
                left++;
            }else{
                right--;
            }
        }
        return ans;
    }
};