// struct Node
// {
//     int data;
//     Node * next;
//     Node * prev;
//     Node (int x)
//     {
//         data=x;
//         next=NULL;
//         prev=NULL;
//     }
        
// };
// SEE CODE AND DO DRY RUN TO UNDERSTAND


class Solution
{
public:

    Node * removeDuplicates(struct Node *head)
    {
        if(head==NULL || head->next==NULL){
            return head;
        }
        
        Node* curr=head->next;
        Node* prevN=head;
        
        while(curr->next!=NULL){
            
            if(curr->data==prevN->data){
                
                curr->next->prev=prevN;
                prevN->next=curr->next;
                
            }
            else{
                prevN=prevN->next;
            }
            curr=curr->next;
        }
        
        if(curr->data==prevN->data){
            
            prevN->next=NULL;
        }
        return head;
    }
};
