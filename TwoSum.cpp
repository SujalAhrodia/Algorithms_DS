class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int> ans;
        
        map<int, int> map;
        
        map.clear();
        for(int i=0; i<nums.size(); i++)
        {
            auto point = map.find(target-nums[i]);
            if(point != map.end())
            {
                ans.push_back(point->second);
                ans.push_back(i);
            }
            map[nums[i]]=i;
        }
        return ans;
    }
};
