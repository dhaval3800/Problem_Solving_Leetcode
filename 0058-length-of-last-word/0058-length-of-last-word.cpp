class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.length();

        int cnt = 0;
        for(int i = n-1; i>=0; i--){
            if(s[i]!=' '){
                cnt++;
            }
            else if(s[i]==' ' && cnt>0){
                return cnt;
            }
                
        }
        return cnt;
    }
};