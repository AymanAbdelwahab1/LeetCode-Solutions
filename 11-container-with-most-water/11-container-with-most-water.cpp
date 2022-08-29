class Solution {
public:
    int maxArea(vector<int>& v) {
        int n=v.size();
        int start=0,end=n-1,ans=0;
        while(end>start){
            if(v[start]<v[end]){
                ans = max(ans,(end-start)*v[start]);
                start++;
            }else if(v[start]>v[end]){
                ans = max(ans,(end-start)*v[end]);
                end--;
            }else{
                ans = max(ans,(end-start)*v[end]);
                start++;
                end--;
            }
        }
        return ans;
    }
};