class Solution {
public:
    string convert(string word)
    {
        map<char, char> mmap;
        for(char ch: word)
        {   
            if(mmap.count(ch)==0)
                mmap[ch]=mmap.size();
        }
        for(int j=0; j<word.size(); j++)
        {   
            word[j]='a'+mmap[word[j]];
        }
        return word; 
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) 
    {
        vector<string> ans;
        
        for(int i=0; i<words.size(); i++)
        {
            if(convert(words[i])==convert(pattern))
                ans.push_back(words[i]);
        }
        return ans;
    }
};
