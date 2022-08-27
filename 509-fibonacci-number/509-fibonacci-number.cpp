//Recursion

// class Solution {
// public:
//     int fib(int n) {
//         if(n==0) return 0;
//         if(n==1) return 1;        
//         return fib(n-1)+ fib(n-2);
//     }
// };


class Solution {
public:
    int fib(int n) {
        int a = 0;
        int b =1;
        int ans = 0;
        if(n==0) return 0;
        if(n==1) return 1;
        for(int i = 2; i<=n; i++){
            ans = a+b;
            a = b;
            b = ans;
        }
        return ans;
    }
};
