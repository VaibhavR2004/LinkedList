
//https://www.geeksforgeeks.org/problems/remove-duplicates-from-an-unsorted-linked-list/1

class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
     // your code goes here
      if (head == NULL){
            return NULL;
        }
        map<int , bool> visited;

        Node *temp = head;
        Node *prev=NULL;
         while (temp != NULL)
        {

        // cycle is present
        if (visited[temp->data] == true)
        {
            prev->next=temp->next;
        }
    else{
        prev = temp;
        visited[temp->data] = true; 
        }
       
        temp = temp->next;
     }
     return head;
    }
};
