
//https://www.geeksforgeeks.org/problems/move-last-element-to-front-of-a-linked-list/1
class Solution{
public:
    ListNode *moveToFront(ListNode *head){
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* q=head;
        ListNode* r= NULL;
        
        while (q->next!=NULL){
            r=q;
            q=q->next;
        }
        r->next=NULL;
        q->next=head;
        head=q;
        
    return head;}
