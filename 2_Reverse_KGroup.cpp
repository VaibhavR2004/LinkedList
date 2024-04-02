/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 https://leetcode.com/problems/reverse-linked-list/
 */
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head ==NULL){
            return head;

        }
        ListNode* cursor= head;
        for(int i=0; i<k; i++){
            if (cursor== nullptr){
                return head;
            }
            cursor= cursor->next;
        }
        ListNode* prev= NULL;
        ListNode* curr= head;
        ListNode* next= NULL;

        int count = 0;
        while (curr != NULL && count <k){
            next = curr->next;
            curr->next = prev ;
            prev =curr;
            curr = next;
            count++;

        }
        //step2  recursion dek lega aga 
        if (next!=NULL){
            head->next = reverseKGroup(next,k);

        }
        return prev;

    }

};
