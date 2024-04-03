// https://www.youtube.com/watch?v=vqS1nVQdCJM&list=PLDzeHZWIZsTryvtXdMr6rPh4IDexB5NIA&index=49&t=1236s
// 43:00 minutes vidoe ka
Node *middleNode(Node *head)
{
    if (head == NULL || head->next == NULL)
        return head;
    if (head->next->next == NULL)
        return head->next;

    Node *slow = head;
    Node *fast = head->next;

    while (fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
            fast = fast->next;
        slow = slow->next;
    }
    cout << slow->data << " ";
    return slow;
}
