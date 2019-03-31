//Naive approach

class Solution {
public:
    int numJewelsInStones(string J, string S) 
    {
        int ans=0;
        
        for(int i=0; i<S.length(); i++)
        {
            for(int j=0; j<J.length(); j++)
            {
                if(S[i]==J[j])
                    ans++;
            }
        }
        return ans;
    }
};


// Set(in this case it costs more memory)

class Solution {
public:
    int numJewelsInStones(string J, string S) 
    {
        int ans=0;
        
        unordered_set<char> table;
        
        for(int j=0; j<J.length(); j++)
            table.insert(J[j]);
        
        for(int i=0; i<S.length(); i++)
        {
            if(table.find(S[i])!=table.end())
                ans++;
        }
        return ans;
    }
};
