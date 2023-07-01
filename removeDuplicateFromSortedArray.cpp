class Solution {
public:
    int removeDuplicates(vector<int>& A) {
        int n = A.size(); 
        if (n ==0 ) return 0; 
        
        int count = 1; 
        int l  = 1; 
        
        for(int r = 1; r < n ; r++) {
            if (A[r] != A[r-1]) {
                count++;
                A[l++] = A[r]; 
            }
        }
        
        return count;
    }
};
