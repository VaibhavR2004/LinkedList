/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 https://youtu.be/cI3P6L6xgpY
 see video to understand
 */
class Solution {
public:
ListNode* reverse(ListNode* head){
        if(head==NULL||head->next==NULL){
    return head;
}
        ListNode* prev = NULL;
        ListNode* curr = head;

        while(curr != NULL){
            ListNode* forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
            
        }
        return prev;
    }
    ListNode* removeNodes(ListNode* head) {
        head = reverse(head);
        ListNode* curr = head, *prev =head;
        int mock= head->val;

        while(head){
            if(head->val >= mock){
                mock=head->val;
                prev=head;
                head=head->next;
            }
            else{
                prev->next =head->next;
                head=prev->next;
            }
        
        }
           head=reverse(curr);

        return head;

    }
};
