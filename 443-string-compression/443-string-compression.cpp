class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0;
        int n = chars.size();
        int answerIndex = 0;
        while(i<n){
            int j = i+1;
            while(j<n && chars[i]==chars[j]){
                j++;
            }
            
            chars[answerIndex] = chars[i];
            answerIndex++;
            
            int count = j-i;
            //converting counting into single digit and saving in answer
            if(count>1){
                string cnt = to_string(count);
                for(char ch: cnt){
                    chars[answerIndex]= ch;
                    answerIndex++;
                }
            }      
            i = j;
        }
        return answerIndex;
    }
};