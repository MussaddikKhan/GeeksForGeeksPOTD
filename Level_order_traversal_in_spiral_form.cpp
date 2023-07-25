// Level order traversal in spiral form 

// Approach 1  Using Stack :                                     

vector<int> findSpiral(Node *root)
{
    //Your code here
    vector<int>ans;
    stack<Node * >s1;
    stack<Node * > s2;
    s1.push(root);
    
    while(!s1.empty() || !s2.empty()){
        while(!s1.empty()){
            Node* x = s1.top(); 
            s1.pop(); 
            ans.push_back(x->data);
             if(x ->right){
                s2.push(x -> right);
            }
           
            if(x -> left){
                s2.push(x -> left);
            }
           
        }
        while(!s2.empty()){
            Node* x = s2.top(); 
            s2.pop(); 
            ans.push_back(x -> data);
             if(x -> left){
                s1.push(x -> left);
            }
             if(x ->right){
                s1.push(x -> right);
            }
           
        }
    }
    return ans; 

}


//Approach 2 using Queue:-
vector<int> findSpiral(Node *root)
{
   
    vector<int> ans;
    queue<Node*> q;
    q.push(root);
    bool flag=true;
    while(q.size()){
        int s=q.size();
        vector<int> level;
        for(int i=0;i<s;i++){
            Node *temp = q.front();
            q.pop();
            level.push_back(temp->data);
            if(temp->left)q.push(temp->left);
            if(temp->right)q.push(temp->right);
        }
        if(flag==true)reverse(level.begin(),level.end());
        for(auto x:level)ans.push_back(x);
    flag=!flag;
    }
    return ans;


}