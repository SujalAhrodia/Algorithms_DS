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

//Binary Search: 

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) 
    {
        int n=nums.size();
        int start=0, end=n-1;
        
        while(start<end)
        {
            int mid = start + (end-start)/2;
            
            if(mid%2==0)
            {
                if(nums[mid-1]==nums[mid])
                    end=mid-2;
                else
                    start=mid+2;
            }
            else
            {
                if(nums[mid-1]==nums[mid])
                    start=mid+1;
                else
                    end=mid-1;
            }
        }
        return nums[start];
    }
};
