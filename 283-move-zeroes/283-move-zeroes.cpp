class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int cnt=0;
        cout<<'[';
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) cnt++;
            else{
                cout<<nums[i];
                v.push_back(nums[i]);
                if(cnt==0&&i==nums.size()-1) break;
                cout<<',';
            }
        }
        for(int i=0;i<cnt;i++){
            cout<<0;
            v.push_back(0);
            if(i==cnt-1) break;
            cout<<',';
        }
        cout<<']';
        nums=v;
    }
};