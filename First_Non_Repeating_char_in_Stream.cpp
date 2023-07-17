class Solution {
	public:
		string FirstNonRepeating(string A){
		    // Code here
		    queue<int>q; 
		    int freq[26] = {0}; 
		    string ans; 
		    for(auto x : A){
		        freq[x-'a']++; 
		        
		        while(!q.empty() and freq[q.front()-'a'] > 1){
		            q.pop(); 
		        }
		        if(q.empty() and freq[x-'a'] > 1){
		            ans += '#';
		        }
		        else{
		            q.push(x);
		            ans += q.front();
		        }
		    }
		    return ans; 
		}

};