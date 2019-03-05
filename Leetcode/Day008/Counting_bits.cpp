class Solution {
public:
    vector<int> countBits(int num) 
    {
        vector<int> dp(num+1);
        dp[0]=0;
                
        for(int i=1; i<=num; i++)
        {
            if(ceil(log2(i))==floor(log2(i)))
            {
                dp[i]=1;
            }
            else
            {
                int diff=i-pow(2,floor(log2(i)));
                dp[i]=dp[diff]+1;
            }
        }
        return dp;
    }
};

//Another approach:
class Solution {
public:
    vector<int> countBits(int num) 
    {
        vector<int> dp(num+1);
        dp[0]=0;
                
        for(int i=1; i<=num; i++)
            dp[i]=dp[i & (i-1)]+1;
        return dp;
    }
};
