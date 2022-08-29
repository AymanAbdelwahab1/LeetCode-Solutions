class Solution {
public:
    int maxArea(vector<int>& v) {
        int n=v.size();
        int start=0,end=n-1,ans=0;
        while(end>start){
            ans = max(ans,(end-start)*min(v[start],v[end]));
            if(v[start]<v[end]){
                start++;
            }else{
                end--;
            }
        }
        return ans;
    }
};