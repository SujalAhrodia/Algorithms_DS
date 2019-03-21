/*
Approach:
if n is prime, return n;
else find the min factor of (i) and then return (i/j)+j
*/

class Solution {
public:
    int minSteps(int n) 
    {
        vector<int> dp(n+1,0);
        
        if(n<2)
            return 0;
        for(int i=2; i<=n; i++)
        {
            dp[i]=i;
            for(int j=2; j<=sqrt(n); j++)
            {
                if(i%j==0)
                {
                    dp[i]=dp[i/j]+j;
                    break;
                }
            }
        }

        return dp[n];
    }
};
