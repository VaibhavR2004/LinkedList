/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
https://leetcode.com/problems/intersection-of-two-linked-lists/
 */
class Solution {
public:
    int lenght(ListNode* head) {
    int len = 0;
    while (head != NULL) {
      len++;
      head = head->next;
    }

    return len;
  }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int lenA=lenght(headA);
        int lenB=lenght(headB);

        while (lenA>lenB){
            lenA--;
            headA=headA->next;

        }
        while(lenB>lenA){
            lenB--;
            headB=headB->next;
        }
        while(headA!=headB){
            headA=headA->next;
            headB=headB->next;

        }
        return headA;
        
    }
};
