void Solution::reverseWords(string &A) 
{
    vector<string> result(0);
    
    istringstream ss(A);
    
    while(ss)
    {
        string word;
        ss>>word;
        
        result.push_back(word);
    }
    
    A.clear();
    for(int i=result.size()-2; i>=0; i--)
    {
        A.append(result[i]);
        if(i!=0)
            A.append(" ");
    }
}
