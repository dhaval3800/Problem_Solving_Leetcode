class Solution {
public:
    int climbStairs(int n) {
        int a=1, b=1;
        if(n==0 || n==1) return 1;
        int ans = 0;
        for(int i =2; i<=n; i++){
            ans= a+b;
            a = b;
            b =ans;            
        }
        return ans;
    }
};