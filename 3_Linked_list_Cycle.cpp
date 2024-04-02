/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 
 * };
 https://leetcode.com/problems/linked-list-cycle/
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if (head == NULL){
            return NULL;
        }
        ListNode* slow = head;
        ListNode* fast = head;

        while (slow !=NULL && fast!=NULL){
            fast= fast->next;
            if (fast!=NULL){
                fast= fast->next;
            }
            slow =slow->next;
            if (slow == fast){
                return slow;

            }
            

        }
        return NULL;
        
    }
};
