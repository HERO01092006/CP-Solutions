class Solution {
public:
    int sortPermutation(vector<int>& nums) {
        int n=nums.size();
        int mx=-1;
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=i)
            mx&=nums[i];
            if(mx==0)
                return 0;
        }

        return max(0,mx);
        
    }
};