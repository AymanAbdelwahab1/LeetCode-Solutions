class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            if(!mp[nums[i]]) {
                mp[nums[i]]=i+1;
                continue;
            }
            if(abs((i+1)-mp[nums[i]])<=k) return true;
            mp[nums[i]]=i+1;
        }
        return false;
    }
};