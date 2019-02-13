/*
map.count =1 | if key element exists in map
map.count =0 | if key element doesn't exist in map
*/
class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        int ans=0, ma=-1;
                
        map<char, int> mmap;
        for( int i=0; i<s.length(); i++)
        {
            if(mmap.count(s[i]) && mmap[s[i]]>ma)
                ma=mmap[s[i]];
            
            mmap[s[i]]=i;
            ans= max(ans, i-ma);
        }
        return ans;
    }
};
