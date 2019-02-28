class Solution {
public:
    string checkIPV6(string s)
    {
        stringstream str(s);
        bool flag=true;
        int len=0;
        
        while(!str.eof())
        {
            len++;
            getline(str,s,':');
            int count=s.length();
            
            for(auto i : s)
            {
                if(!isxdigit(i))
                    return "Neither";
            }
            if(count>4 || s.empty())
                return "Neither";

        }
        return (len<=8) ? "IPv6":"Neither";
    }
    string checkIPV4(string s)
    {
        stringstream str(s);
        bool flag=true;
        int len=0;
        
        while(!str.eof())
        {
            len++;
            getline(str,s,'.');
            int count=s.length();
            
            for(auto i : s)
            {
                if(!isdigit(i))
                    return "Neither";
            }
            if(count>3 || (count>1 && s[0] == '0') || s.empty())
                return "Neither";
            if(stoi(s)>255)
                return "Neither";
        }
        return (len==4) ? "IPv4":"Neither";            
    }
    string validIPAddress(string IP) 
    {
        return (IP.find('.') == string::npos) ? checkIPV6(IP): checkIPV4(IP);   
    }
};
