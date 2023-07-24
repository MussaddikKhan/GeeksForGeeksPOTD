// Right View of Binary Tree

// Approach 1 : using Map 
class Solution
{
    public:
    //Function to return list containing elements of right view of binary tree.
    void solve(Node * root, vector<int>&ans,  map<int,int>&mm,int level){
        if(root == NULL)return; 
        
        if(!mm[level]){
            ans.push_back(root -> data);
            mm[level] = 1; 
        }
        solve(root -> right, ans,mm, level+1);
        solve(root -> left, ans,mm, level+1);
    }
    vector<int> rightView(Node *root)
    {
       // Your Code here
       vector<int>ans;
       map<int,int>mm;
       solve(root, ans,mm,0);
       return ans; 
    }
};

//Approach 2 : without Map 
class Solution
{
    public:
    //Function to return list containing elements of right view of binary tree.
    void solve(Node * root, vector<int>&ans, int level){
        if(root == NULL)return; 
        
        if(ans.size() == level){
            ans.push_back(root -> data);
        }
        solve(root -> right, ans, level+1);
        solve(root -> left, ans, level+1);
    }
    vector<int> rightView(Node *root)
    {
       // Your Code here
       vector<int>ans; 
       solve(root, ans,0);
       return ans; 
    }
};
