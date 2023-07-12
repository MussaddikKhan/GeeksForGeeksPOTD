// Iterative Code 

class Solution{
    public:
    //You need to complete this fucntion
    
    int m = 1e9+7; 
    long long power(int n,int r)
    {
        long long N = n, R = r; 
       long long mul = 1; 
       while(R > 0 ){
        if(R&1){
            
           mul = (mul * N)%m; 
        }
        N = (N * N)%m;
        R /= 2; 
       }
       return mul%m; 
    }

};

// Recursive Code 


class Solution{
    public:
    //You need to complete this fucntion
    int mod = 1e9+7; 
    long long solve(int N, int R){
        if(R == 0)return 1; 
        if(R == 1)return N; 
        long long ans = 1; 
        long long num = solve(N, R/2);
        if(R & 1){
            ans = (num%mod * num%mod * N%mod)%mod; 
            return ans;  
        }
        else{
            ans = (num%mod * num%mod )%mod; 
            return ans;   
        }
    }
    
    long long power(int N,int R)
    {
       return solve(N , R)%mod;
    }

};

// 