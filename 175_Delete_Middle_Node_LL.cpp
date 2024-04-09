/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 <SEE CODE TO UNDERSTAND>
 */
class Solution {
public:
    
    ListNode* deleteMiddle(ListNode* head) {
         if (head == NULL)
        return head;
    if(head->next==NULL)return NULL;

    ListNode *slow = head;
    ListNode *fast = head->next;
    int count= 0;

    while (fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
            fast = fast->next;
        slow = slow->next;
        count++;

    }
    ListNode* temp=head;
    int counter=0;
    while(temp!=NULL){
        if(counter==count-1)
            break;
        temp=temp->next;
        counter++;

    }
    temp->next= slow->next;
    slow->next=NULL;
    delete slow;
    return head;

    }
};
