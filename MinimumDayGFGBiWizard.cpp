class Solution {
  public:
    int getMinimumDays(int N,string S, vector<int> &P) {
        // code here
    //   map<int, char>mm; 
       unordered_map<int,int>mm2;
          
      for(int i =0; i< P.size();i++){
          mm2[P[i]] =  i; 
      }
       int Lindex = 0; 
       for(int i = 0; i < S.size();i++){
           if(S[i] == S[i+1]){
               int n1 = mm2[i];
               int n2 = mm2[i+1];
               int Index = min(n1,n2)+1;
               Lindex = max(Lindex, Index);
           }
       }
      return  Lindex;
       
    }
       
};
// Test Case :- 39
// toogupakevogoswprnjmliopmeaqixwjifzunwv
// 36 1 5 20 34 16 0 29 11 2 13 12 37 38 23 35 14 24 33 10 32 4 25 27
// 8 7 15 26 31 6 30 9 21 18 19 28 3 22 17