class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) 
    {
        if(nums.size()==0)
            return 0;
        int m=1, ans=1;
        for(int i=0; i+1<nums.size(); i++)
        {
            ans = (nums[i+1]>nums[i]) ? ans+1 : 1;
            m=max(m,ans);
        }
        return m;
    }
};
