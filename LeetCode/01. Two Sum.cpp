class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

// 1ST APPROACH  

        // int n=nums.size();
        // vector<int> a(2);
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=0;j<n;j++)
        //     {
        //         if(nums[i]+nums[j]==target && i!=j)
        //         {
        //             a[0]=i;
        //             a[1]=j;
        //         }

        //     }
        // }

 
        // return a;

// 2ND APPROACH

        int n=nums.size();
        vector<int> v;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    // v[0]=i;
                    // v[1]=j;
                    v.push_back(i);
                    v.push_back(j);
                    break;
                }
            }
        }
        return v;
        
    }
};
