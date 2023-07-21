
// Recursive Code : 
class Solution
{
    public:
   
    struct node *reverse (struct node *head, int k)
    { 
        // Complete this method
        if(head == NULL || head -> next == NULL)return head; 
        node * curr = head; 
        node * prev = NULL; 
        node * forward = NULL;
        int cnt = 0; 
        while(curr and cnt < k){
            forward = curr -> next; 
            curr -> next = prev; 
            prev = curr; 
            curr =forward; 
            cnt++; 
        }
        head -> next = reverse(curr,k);
        return prev; 
    }
};

//TC :- O(N) , SC :- O(N); 

// Iterative Code :
  
class Solution
{
    public:
   
    struct node *reverse (struct node *head, int k)
    { 
        // Complete this method
        if(head == NULL || head -> next == NULL)return head; 
        node * curr = head; 
        node * prev = NULL; 
        node * forward = NULL;
        node * fHead = NULL; 
        node * temp = NULL; 
        while(head){
        int cnt = 0;
            while(curr and cnt < k){
            forward = curr -> next; 
            curr -> next = prev; 
            prev = curr; 
            curr =forward; 
            cnt++; 
         }
         if(fHead==NULL)fHead = prev; 
         if(temp)temp -> next = prev; 
         temp = head; 
         prev = NULL; 
         head = curr; 
        }
        return fHead; 
    }
};
//TC :- O(N) , SC :- O(1); 
