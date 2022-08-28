class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int n=arr.size(),ans = 0,idx=0,peek=0;
        while(idx<n){
            int start = idx;
            while(idx+1 < n && arr[idx] < arr[idx+1])
                idx++;
            if(idx==start){
                idx++;
                continue;
            }
            peek = idx;
            while(idx+1 < n && arr[idx] > arr[idx+1])
                idx++;
            if(peek == idx){
                idx++;
                continue;
            }
            ans=max(ans,idx-start+1);
        }
        return ans;
    }
};