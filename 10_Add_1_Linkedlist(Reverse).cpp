// https://www.youtube.com/watch?v=aXQWhbvT3w0
// https://www.geeksforgeeks.org/problems/add-1-to-a-number-represented-as-linked-list/1
class Solution
{
    public:
    Node* reverse(Node* head){
        if(head==NULL||head->next==NULL){
    return head;
}
        Node* prev = NULL;
        Node* curr = head;

        while(curr != NULL){
            Node* forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
            
        }
        return prev;
    }
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        if (head==NULL){
            return NULL;
        }
        
        head= reverse(head);
        Node* temp= head;
        int carry =1;
        
        while(temp!=NULL){
            temp->data = temp->data +carry;
            if (temp->data<10){
                carry=0;
                break;
            }
            else{
                temp->data=0;
                carry=1;
            }
            temp= temp->next;
            
        }
        if(carry ==1){
            Node* newNode= new Node(1);
            head =reverse(head);
            newNode -> next = head;
            return newNod;
        }
        head = reverse(head);
        return head;
        
        
    }
};
