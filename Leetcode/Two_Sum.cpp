class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
 int n=nums.size();
        vector<int> v;
        int start=0,end=n-1;
        while(start<end)
        {
            int sum=nums[start]+nums[end];
            if(sum==target)
            {
                v.push_back(start);
                v.push_back(end);
                break;
            }
            else if(sum>target)
            end--;
            else
            start++;
        }
        return v;
        





    }
};K