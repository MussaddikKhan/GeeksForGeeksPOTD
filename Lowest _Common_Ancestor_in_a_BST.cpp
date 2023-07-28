//Recursive Code with TC: O(N) , SC O(N); 
//Function to find the lowest common ancestor in a BST.
class Solution{
    public:
        Node* LCA(Node *root, int n1, int n2)
        {
           if(root == NULL)return NULL; 
           if(root -> data == n1) return root; 
           if(root -> data == n2) return root; 
           
           Node * leftAns = LCA(root -> left, n1, n2);
           Node * rightAns = LCA(root -> right, n1, n2);
           
           if(leftAns != NULL and rightAns != NULL)return root; 
           if(leftAns != NULL and rightAns == NULL)return leftAns; 
           if(leftAns == NULL and rightAns != NULL)return rightAns; 
           if(leftAns == NULL and rightAns == NULL)return NULL; 
            
        }

};

// Iterative Code with TC: O(N) , SC O(1);
//Function to find the lowest common ancestor in a BST.
class Solution{
    public:
        Node* LCA(Node *root, int n1, int n2)
        {
            // code here
            while(true){
                if(root -> data > n1 and root -> data > n2){
                    root = root ->left; 
                }
                else if(root -> data < n1 and root -> data < n2){
                    root = root -> right;
                }
                else return root; 
            }
        }
};