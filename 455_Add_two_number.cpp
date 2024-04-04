/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 https://leetcode.com/problems/add-two-numbers-ii/description/
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

    void insertAtTail(ListNode* &head, ListNode* &tail, int digit){
        ListNode* temp= new ListNode(digit);
        if (head==NULL){
            head = temp;
            tail = temp;
            return ;
        }
        else{
            tail->next=temp;
            tail= temp;
        }
        
}

    ListNode* add(ListNode* first, ListNode* second){
        int carry =0;
        ListNode* anshead= NULL;
        ListNode* anstail= NULL;

        while(first!= NULL || second!=NULL || carry!=0){
           int val1=0;
            if (first!=NULL)
             val1 = first->val;
            int val2=0;
            if (second!=NULL)
                val2= second->val;

            int sum=val1 + val2+carry;

            int digit = sum%10;

            insertAtTail(anshead, anstail, digit);

            carry = sum/10;
            if(first!=NULL){
                first = first->next;
            }
            if(second!=NULL){
                second= second->next;
            }
        }
            return anshead;
        
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1 = reverse(l1);
        l2= reverse(l2);

        ListNode* ans= add(l1, l2);
        ans= reverse(ans);

        return ans;
        
    }
};
