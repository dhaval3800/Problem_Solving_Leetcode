class Solution {
public:
    int romanToInt(string s) {
        map<char,int> mp = {{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        int result = 0;
        for(int i = s.size();i>=0;i--){
            if(i==0 || mp[s[i]]<=mp[s[i-1]]){
                result+=mp[s[i]];
            }
            else
                result += mp[s[i]]-2*mp[s[i-1]];
        }
        return result;
    }
};