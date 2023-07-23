// Approach 1  :- Count Occurence and replace

class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        // Add code here
        int zeroCnt = 0; 
        int oneCnt = 0; 
        int twoCnt = 0; 
        Node * temp = head; 
        while(temp){
            if(temp -> data == 0)zeroCnt++; 
            else if(temp -> data == 1)oneCnt++; 
            else twoCnt++; 
            temp = temp ->next; 
        }
        
        temp = head; 
       
            while(zeroCnt){
                temp -> data = 0;
                temp = temp -> next;
                zeroCnt--; 
            }
            while(oneCnt){
                temp -> data = 1;
                temp = temp -> next;
                oneCnt--; 
            }
            while(twoCnt){
                temp -> data = 2; 
                temp = temp -> next; 
                twoCnt--; 
            }
        return head; 
    }
};

  // Approach 2 :- make a new Linked List and merge it
  
class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        // Add code here
        Node * zeroHead = new Node(-1);
        Node * zeroTail = zeroHead; 
        
        Node * oneHead = new Node(-1);
        Node * oneTail = oneHead; 
        
        Node * twoHead = new Node(-1);
        Node * twoTail = twoHead;
        
        Node *temp = head; 
        while(temp){
            if(temp -> data == 0){
                Node * newNode = new Node(temp -> data);
                zeroTail -> next = newNode; 
                zeroTail = newNode; 
            }
            else if(temp -> data == 1){
                Node * newNode = new Node(temp -> data);
                oneTail -> next = newNode; 
                oneTail = newNode; 
            }
            else{
                Node * newNode = new Node(temp -> data);
                twoTail -> next = newNode; 
                twoTail = newNode; 
            }
            temp  = temp -> next; 
        }
        
        if(zeroHead -> next != NULL){
            if(oneHead -> next != NULL){
                zeroTail -> next = oneHead ->next; 
                if(twoHead -> next != NULL){
                    oneTail ->next = twoHead -> next; 
                }
            }
            else{
                zeroTail -> next = twoHead ->next; 
            }
          return zeroHead -> next;
        }
        if(oneHead -> next != NULL){
            if(twoHead -> next != NULL){
                    oneTail ->next = twoHead -> next; 
             }
             return oneHead -> next; 
        }
        return twoHead -> next; 
    }
};