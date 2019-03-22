/*

new functions learnt: 
1. to_string() : converts int to string
2. str.append(str1) : appends str1 to str
3. sort(vec.begin(), vec.end(), comp) : here, comp can be defined by you according to the conditions(rest is taken care of automatically)
4. vec.substr(pos): returns vector form pos to end.
*/

int comp(string a, string b)
{
    string ab= a.append(b);
    string ba= b.append(a);
    
    return ab.compare(ba)>0 ? 1 : 0;
}

string Solution::largestNumber(const vector<int> &A) 
{
    string ans;
    int count=0;
    
    vector<string> result;
    
    for(int i=0; i<A.size(); i++)
    {
        if(A[i]==0)
            count++;
        result.push_back(to_string(A[i]));
    }
    if(count==A.size())
        return "0";
        
    sort(result.begin(), result.end(), comp);
    
    for(int i=0; i<result.size(); i++)
    {
        ans.append(result[i]);
    }
    return ans;
}
