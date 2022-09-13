// class Solution {
// public:
//     bool isValid(string s) {
        
//         stack<char> st;
        
//         if(s[0]=='}' || s[0]==')' || s[0]==']') 
//             return false;
//         else
//             st.push(s[0]);

//         for(int i =1; i<s.size(); i++){  
            
//             if(!st.empty() && s[i]==')' && st.top()=='(')
//                 st.pop();
//             else if(!st.empty() && s[i]==']'&& st.top()=='[') 
//                 st.pop();
//             else if(!st.empty() && s[i]=='}'&& st.top()=='{') 
//                 st.pop();
//             else 
//                 st.push(s[i]);

//         }
//         if(st.empty()){
//             return true;
//         }
//         else
//             return false;
//     }
// };


class Solution {
public:
    bool isValid(string s) {
        
        stack<char> st;
        
        for(int i =0; i<s.size(); i++){  
              
            //for opening brackets
            if(s[i]=='{' || s[i]=='(' || s[i]=='[') 
                st.push(s[i]);
            else
                //for closing brackets
                if(!st.empty()){
                    if((s[i]==')' && st.top()=='(') || (s[i]==']'&& st.top()=='[') || 
                       (s[i]=='}'&& st.top()=='{')){
                        cout<< st.top();
                        st.pop();
                    }
                    else
                        return false;
                }
                else 
                    return false;
               
        }
        
        if(st.empty()){
            return true;
        }
        else
            return false;
    }
};


