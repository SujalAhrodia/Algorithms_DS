/*
Vector of only positive integers
*/
class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        int sum=nums.size()*(nums.size()+1)/2;
        int sum2=accumulate(nums.begin(), nums.end(), 0);
        
        return sum-sum2;
    }
};
