/*

Approach: dp of [vector of given numbers] X [S]
i: vector numbers
j: time units

*/


class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int S) 
    {
        int n=nums.size();
        int sum = accumulate(nums.begin(), nums.end(),0);
        
        if(S>sum || S<-sum || S+sum<0 || (S+sum)%2==1 )
            return 0;
        
        int val = (S+sum)/2;
        
        vector< vector<int> > dp(n+1, vector<int> (val+1,0) );
        
        dp[0][0]=1;
        for(int i=1; i<=n; i++)
        {
            for(int j=0; j<=val; j++)
            {                    
                dp[i][j]=dp[i-1][j];
                if(nums[i-1]<=j)
                    dp[i][j]+=dp[i-1][j-nums[i-1]];
            }
        }
        
        return dp[n][val];
    }
};
