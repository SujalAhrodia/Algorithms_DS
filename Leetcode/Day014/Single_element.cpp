class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) 
    {
        for(int i=0; i<nums.size();)
        {
            if(i==nums.size()-1)
                return nums[i];
            if(nums[i]==nums[i+1])
                i+=2;
            else 
                return nums[i];
        }
        return 0;
    }
};


//Another approach using XOR:

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) 
    {   
        int ans=nums[0];
        for(int i=1; i<nums.size(); i++)
        {
            ans^=nums[i];
        }

        return ans;
    }
};
