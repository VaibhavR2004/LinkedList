
// https://www.geeksforgeeks.org/problems/split-a-circular-linked-list-into-two-halves/1

void splitList(Node *head, Node **head1_ref, Node **head2_ref)
{
    Node * slow= head;
    Node* fast=head;
    
    while(fast->next!=head && fast->next->next!=head){
        fast=fast->next->next;
        slow=slow->next;
        
    }
    *head2_ref= slow->next;
    slow->next=head;
    
    fast = *head2_ref;
    while(fast -> next != head){
        fast = fast -> next;
    }
    
    fast -> next = *head2_ref;
    
    *head1_ref = head;
    

}
