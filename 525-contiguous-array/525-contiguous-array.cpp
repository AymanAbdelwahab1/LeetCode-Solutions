class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        map<int,int> mp;
        int ans = 0, sum = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0) nums[i] = -1;
            sum += nums[i];
            if(sum == 0){
                ans = max(ans, i+1);
            }
            else if(mp.count(sum)){
                ans = max(ans, i-mp[sum]);
                continue;
            }
            mp[sum] = i;
        }
        return ans;
    }
};