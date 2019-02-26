/*

Uncommon means there is no common subsequence, and we need to find such longest subsequence.

just think about the cases where length of strings are sufficient for the solution!!

*/
class Solution {
public:
    int findLUSlength(string a, string b) 
    {
        int n1=a.length(), n2=b.length();
        
        if(a==b)
            return -1;
        else if(a!=b && n1==n2)
            return n1;
        else 
            return max(n1,n2);
    }
};
