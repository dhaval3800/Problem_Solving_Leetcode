class Solution {
 
    void SubSet(vector<int> nums, vector<int> output, int index, set<vector<int>> &temp){
        //base case
        if(index >= nums.size()){
            temp.insert(output);
            return;
        }
        
        //exclude
        SubSet(nums, output, index+1, temp);
        
        //include
        output.push_back(nums[index]);
        SubSet(nums, output, index+1,temp);
    }
    
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        vector<int> output;
        set<vector<int>> temp;
        int index = 0;
        SubSet(nums, output,  index,temp);       
        
        for(auto i: temp){
            ans.push_back(i);
        }
        return ans;
    }

};