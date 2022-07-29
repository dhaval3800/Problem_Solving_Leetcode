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
                index = n%10;
                val += index*index;
                n = n/10;
            }
            n = val;
        }
        return false;
    }
};