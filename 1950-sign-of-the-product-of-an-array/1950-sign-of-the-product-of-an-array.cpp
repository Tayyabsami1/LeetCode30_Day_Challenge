class Solution {
public:
    int arraySign(vector<int>& nums) {
        int n=nums.size(),i=1,Product=0;

        if(nums[0]>0)
        Product=1;
        else if(nums[0]<0)
        Product=-1;

        for(i; i<n; i++)
        {
            if(nums[i]==0 || Product==0)
            {
                return 0;
            }

            if(nums[i]<0)
            nums[i]=-1;
            else nums[i]=1;

            Product*=nums[i];
        }
        return Product;
    }
};