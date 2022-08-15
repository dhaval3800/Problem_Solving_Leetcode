class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int> ans;
        int size = arr.size();
        int i = 0;
        sort(arr.begin(),arr.end());
        while(i<size){
            
            int j = i+1;
            while(j<size){
                if(arr[i]==arr[j]){
                    j++;
                }
                else
                    break;
            }
            
            int count = j-i;
            ans.push_back(count);
            i = j;
        }
        
        size = ans.size();
        sort(ans.begin(),ans.end());
        for(int i = 0;i<size-1;i++){
            if(ans[i]==ans[i+1]){
                return false;
            }
        }
        return true;
    }
};


 