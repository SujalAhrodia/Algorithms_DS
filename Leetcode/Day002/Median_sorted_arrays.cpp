#include <algorithm>

// T(n) = O((n+m)log(n+m))

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
    {
        double ans=0;
        int n=nums1.size()+nums2.size();
        vector<int> res =nums1;
        
        res.insert(res.end(),nums2.begin(), nums2.end());
        sort(res.begin(), res.end());
            
        if(n%2==0)
            ans =(double)(res[n/2-1] + res[n/2])/2;  
 
        else
            ans=(double)res[(n-1)/2];

        return ans;
    }
};
