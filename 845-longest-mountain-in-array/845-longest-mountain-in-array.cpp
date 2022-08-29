class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int ups=0,downs=0,ans=0,n=arr.size();
        for(int i=1;i<arr.size();i++){
            if(downs && arr[i-1] < arr[i] || arr[i-1] == arr[i])
                ups=downs=0;
            ups += arr[i-1] < arr[i];
            downs += arr[i-1] > arr[i];
            
            if(ups&&downs)
                ans = max(ans, ups+downs+1);
        }
        return ans;
    }
};