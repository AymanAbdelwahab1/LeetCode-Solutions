class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int ans=0;
        ans=nums[n-1]*nums[n-2]*nums[n-3];
        if(ans < nums[0]*nums[1]*nums[n-1])
            ans=nums[0]*nums[1]*nums[n-1];
        return ans;
    }
};