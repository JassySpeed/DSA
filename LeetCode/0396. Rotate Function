class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int prev=0,psum=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            prev+=(i*nums[i]);
            psum+=nums[i];
        }
        int res=prev;
        for(int i=n-1;i>0;i--){
            prev=prev-(n-1)*nums[i]+psum-nums[i];
            res=max(res,prev);
        }
        return res;

    }
};
