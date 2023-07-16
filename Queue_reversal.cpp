
// Approach 1 :- Using Stack 
class Solution
{
    public:
   
    queue<int> rev(queue<int> q)
    {
       stack<int>ss; 
       while(!q.empty()){
           ss.push(q.front());
           q.pop();
       }
       
       while(!ss.empty()){
           q.push(ss.top());
           ss.pop(); 
       }
       return q; 
    }
};


// Approach 2 :- Using Recursion. 
class Solution
{
    public:
    
    void solve(queue<int>&q){
        if(q.empty())return; 
        int x = q.front(); 
        q.pop(); 
        solve(q);
        q.push(x);
    }
    queue<int> rev(queue<int> q)
    {
        solve(q);
        return q; 
    }
};