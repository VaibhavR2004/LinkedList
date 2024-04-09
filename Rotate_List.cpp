/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == nullptr)
            return nullptr;

        ListNode* curr = head;
        int size = 1;

        // calculating length and making a circular loop
        while (curr->next != nullptr) {
            curr = curr->next;
            ++size;
        }

        curr->next = head;

        // cut from the rotating point
        int i = size - (k % size);

        while (i > 1) {
            head = head->next;
            i--;
        }

        curr = head->next;
        head->next = nullptr;
        return curr;
    }
};
