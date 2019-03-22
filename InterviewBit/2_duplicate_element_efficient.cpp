/*
general approach: count array, space=O(n)

In space: O(1)
approach: cycle detection in linked list(Floyd's)
*/

int Solution::repeatedNumber(const vector<int> &A) 
{
    int slow=A[0], fast=A[A[0]];
    
    while(slow!=fast)
    {
        slow=A[slow];
        fast=A[A[fast]];
    }
    
    fast=0;
    
    while(fast!=slow)
    {
        slow=A[slow];
        fast=A[fast];
    }
    
    return !slow ? -1:slow;
}
