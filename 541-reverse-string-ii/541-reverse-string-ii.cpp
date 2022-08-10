class Solution {
public:
    string reverseStr(string s, int k) {

        for(int i = 0; i<s.size(); i+=2*k){
            int n = s.size()-1;
            int start = i;
            int end = min(i+k-1,n);
            while(start<=end){
                swap(s[start],s[end]);
                start++;
                end--;
            }
        }
        return s;
    }
};

