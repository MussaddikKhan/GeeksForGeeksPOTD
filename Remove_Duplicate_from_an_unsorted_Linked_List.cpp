// Remove_Duplicate_from_an_unsorted_Linked_List


class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
     // your code goes here
      map<int,int>mm; 
      Node * curr = head; 
      Node * prev = head; 
      
      while(curr){
          if(mm[curr -> data]){
              Node  * temp = curr; 
              curr =curr -> next; 
              prev ->next = curr; 
              temp -> next = NULL; 
              delete temp; 
          }
          else{
              mm[curr -> data] = 1; 
              prev = curr; 
              curr = curr -> next; 
          }
      }
      return head; 
    }
};