/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
https://leetcode.com/problems/middle-of-the-linked-list/
 */
class Solution {
public:

    ListNode* middleNode(ListNode* head) {
        if(head == NULL){
            return head;
        }
        ListNode* e=head;
        int len=0;

        while(e!=NULL){
            len++;
            e=e->next;
        }
        int mid= (len/2);
        ListNode* s=head;
        int cur=0;
        while(cur<mid){
            s=s->next;
            cur++;
        }

        return s;
        
    }
};
