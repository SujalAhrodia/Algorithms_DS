/*
map.count =1 | if key element exists in map
map.count =0 | if key element doesn't exist in map
*/
class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
       int ans=0, count=0, spos=0;
        map<int, int> mmap;
        for(int i=0;i<s.size(); i++)
        {
            if(mmap.find(s[i])!=mmap.end())
            {

                if(mmap[s[i]] < spos)
                {
                    mmap[s[i]] = i;
                    count++;
                }

                else 
                {
                    if(count > ans)
                        ans = count;

                    count-= mmap[s[i]]-spos;
                    spos = mmap[s[i]]+1;
                    mmap[s[i]] = i;
                }
            }
            else
            {
                mmap[s[i]]=i;
                count++;
            }
        }
        if(count>ans)
            ans=count;
        return ans;
    }
};
//Approach 2
/*
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

*/
