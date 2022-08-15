class Solution {
private:
    bool valid(char s){
        if((s>='a' and s<='z') || (s>='A' and s<='Z') || (s>='0' and s<='9')){
            return true;     
        }
    
        return false;    
        }

    char lower(char s){
        if((s>='a' and s<='z') ||  (s>='0' and s<='9')){
            return s;
        }else{
            char temp=s-'A'+'a';
            return temp;
        }
    }
    
    bool palindrom(string st){
    int s=0,e=st.length()-1;
    
    while(s<=e){
        if(st[s]!=st[e]){
            return 0;
            
        }else{
            s++;
            e--;
        }
       
    }
     return true;
    }

    

public:
    bool isPalindrome(string s) {
        string temp="";
    
        for(int i=0;i<s.length();i++){
            if(valid(s[i])){
                temp.push_back(s[i]);
            }
        }
    
    
    //convert into lower  case
    
        for(int i=0;i<temp.length();i++){
            temp[i]=lower(temp[i]);
        }
    
    //chek normal temp string is palindrom or not
    
        return palindrom(temp);
       
    }
};