class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int n=arr.size(),ans = 0,i=0,peek=0;
        while(i<n){
            int start = i;
            while(i+1 < n && arr[i] < arr[i+1])
                i++;
            if(i==start){
                i++;
                continue;
            }
            peek = i;
            while(i+1 < n && arr[i] > arr[i+1])
                i++;
            if(peek == i){
                i++;
                continue;
            }
            ans=max(ans,i-start+1);
        }
        return ans;
    }
};