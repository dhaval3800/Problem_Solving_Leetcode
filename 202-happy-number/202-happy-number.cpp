class Solution {
public:
    bool isHappy(int n) {
        set<int> myset;
        int val;
        int index;
        while(myset.count(n)==0){
            if(val==1) return true;
            myset.insert(val);
            val= 0;
            while(n){
                val += (n%10)*(n%10);
                n = n/10;
            }
            n = val;
        }
        return false;
    }
};