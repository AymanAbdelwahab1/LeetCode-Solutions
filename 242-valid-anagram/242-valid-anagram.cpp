class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        for(int i=0;i<t.size();i++){
            if(mp[t[i]]==0) return false;
            mp[t[i]]--;
        }
        for(int i=0;i<s.size();i++){
            if(mp[s[i]]>0) return false;
        }
        return true;
    }
};