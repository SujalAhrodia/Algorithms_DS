class Solution {
public:
    int longestSubstring(string s, int k) 
    {
//split the string into substrs by characters of occurrence less than k. Then recursively apply the problem to each substr.
        return helper(s,k, 0, s.length());
    }
    int helper(string s, int k, int start, int end)
    {
        int ans=0;
        int count[26] ={0};
        for(int i=start; i<end; i++)
        {
            count[s[i]-'a']++;
        }
        
        for(int i=start; i<end;)
        {
            while(i<end && count[s[i]-'a']<k)
            {   
                i++;
            }
            
            if(i==end)
                break;
            
            int l=i;
            
            while(l<end && count[s[l]-'a']>=k)
            {   
                l++;
            }
            if(i==start && l==end)
                return end-start;
            ans=max(ans,helper(s,k,i,l));
            
            i=l;
        }
        return ans;
    }
};
