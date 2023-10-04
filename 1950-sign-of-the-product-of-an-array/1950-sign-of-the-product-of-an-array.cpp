class Solution {
public:
    int arraySign(vector<int>& nums) {
        int n=nums.size(),i;
        if(nums[0]>0)
        nums[0]=1;
        else if(nums[0]<0)
        nums[0]=-1;
        else nums[0]=0;

        for(i=1; i<n; i++)
        {
            if(nums[0]==0 || nums[i]==0)
            {
                return 0;
            }

            if(nums[i]<0)
            nums[i]=-1;
            else nums[i]=1;

            nums[0]*=nums[i];
        }
        return nums[0];
    }
};