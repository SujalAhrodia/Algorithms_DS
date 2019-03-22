int getMiddle(Node *head)
{
    if(!head)
        return -1;
    
    Node *slow=head;
    Node *fast=head;
    
    while(slow->next && fast->next && fast->next->next)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    if(fast->next)
        return slow->next->data;
    return slow->data;
}
