class Solution {
public:
    bool isPowerOfTwo(int n) {
        int ans = 1;
        
        if(n==1){
            return true;
        }
        
        for(int i =1; i<=30; i++){
                                   
            ans = ans*2;
            if(ans == n ){
                return true;
            }
            
        }
        return false;
    }
};