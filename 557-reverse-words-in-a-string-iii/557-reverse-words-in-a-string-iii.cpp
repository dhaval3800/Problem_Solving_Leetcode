class Solution {
public:
    string reverseWords(string s) {
    int start = 0;
        
        for(int i =0; i<s.size();i++){
            if(s[i]==' '){ 
                int end = i-1;        
                while(start<=end){
                    swap(s[start],s[end]);
                    start++;
                    end--;
                }
                start = i+1;
            }
            
            if(i==s.size()-1){
                int end = i;        
                while(start<=end){
                    swap(s[start],s[end]);
                    start++;
                    end--;
                }
            }
            
        }
        return s;
    }
};