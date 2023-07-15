//User function template for C++

class Solution
{
    public:
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        if(s.size() == (sizeOfStack+1)/2){
            s.pop();
            return; 
        }
        // For Store top Element 
        int x  = s.top(); 
        s.pop(); 

        deleteMid(s, sizeOfStack);
        // BackTrack -> again push popped element in stack while 
        s.push(x);
    }
};