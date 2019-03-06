class Solution {
public:
    int integerBreak(int n) 
    {
        int dp[n+1]={1};
        
        for(int i=0; i<=n; i++)
        {
            int temp=0;
            for(int j=0; j<i; j++)
            {
                int prod=dp[j]*(i-j);
                if(prod>temp)
                    temp=prod;
            }
            if(i<n)
                temp=max(temp,i);
            dp[i]=temp;
        }
        
        return dp[n];
    }
};

// If we start with n>2

class Solution {
public:
    int integerBreak(int n) 
    {
        int dp[n+1]={1};
        dp[0]=0, dp[1]=1;
        
        for(int i=2; i<=n; i++)
        {
            int temp=0;
            for(int j=1; j<i; j++)
            {
                int prod=dp[j]*(i-j);
                if(prod>temp)
                    temp=prod;
            }
            if(i<n)
                temp=max(temp,i);
            dp[i]=temp;
        }
        
        return dp[n];
    }
};
