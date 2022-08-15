class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int> mp;
        int ans=0,cnt=0,j=0;
        for(int i=0;i<s.size();i++){
            j=i;
            while(j<s.size()){
                if(!mp[s[j]]){
                    mp[s[j]]=1;
                    j++;
                    ans=max(ans,j-i);
                }
                else{
                    ans=max(ans,j-i);
                    mp.clear();
                    j++;
                    break;
                }
            }
            // ans=max(ans,j-i-1);
        }
        return ans;
    }
};