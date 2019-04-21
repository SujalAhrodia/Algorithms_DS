class Solution {
    public boolean repeatedSubstringPattern(String s) 
    {
        return s.concat(s).indexOf(s,1) < s.length() ;    
    }
}

// Another:

class Solution {
    public boolean repeatedSubstringPattern(String s) 
    {
        return (s+s).substring(1, 2*s.length()-1).contains(s) ;    
    }
}
