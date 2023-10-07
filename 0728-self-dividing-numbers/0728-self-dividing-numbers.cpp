class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        int temp;
        bool Condition=false;
        vector<int>Nums;

        while(left<=right)
        {
            temp=left;
            while(temp!=0)
            {
                if(temp%10==0)
                {
                    Condition=false;
                    break;
                }
                if(left%(temp%10) !=0)
                {
                    Condition=false;
                    break;
                }
                Condition=true;
                temp/=10;
            }
            if(Condition)
            {
                Nums.push_back(left);
            }
    left++;
        }
        return Nums;
    }
};