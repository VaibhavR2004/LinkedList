// https://www.youtube.com/watch?v=GSpg2DTOqYw
// watch from 12:57

//User function Template for C++

int countTriplets(struct Node* head, int x) 
{ 
     unordered_map<int,int> mp;
    int cnt = 0;
    Node* ptr1;
    Node* ptr2;
    for(ptr1 = head; ptr1 != NULL && ptr1->next != NULL; ptr1 = ptr1->next){
        if(ptr1->data > x) continue;
        for(ptr2 = ptr1->next; ptr2 != NULL; ptr2 = ptr2->next){
            int a = ptr1->data;
            int b = ptr2->data;
            int req = x-(a+b);
            if(mp.find(req) !=mp.end()) cnt++;
        }
        mp[ptr1->data]++;
    }
 return cnt;

} 
