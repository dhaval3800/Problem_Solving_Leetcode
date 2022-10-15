class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.length();

        for (int i = 0; i < n / 2; i++){
            swap(s[i], s[n - i - 1]);
        }
        int i =0;
        int cnt =0;
        while(s[i]==' '){
            i++;
        }
        
        while(i<n && s[i]!=' '){
            i++;
            cnt++;
        }
        return cnt;
    }
};