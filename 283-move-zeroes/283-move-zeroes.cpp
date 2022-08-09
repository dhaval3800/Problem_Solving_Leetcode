class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++){
            if(nums[i]!=0){
                continue;
            }
            for(int j = i+1; j<nums.size();j++){
                if(nums[j]==0){
                    continue;                    
                }
                else{
                    swap(nums[i],nums[j]);
                    break;
                }
            }
        }
        
        }
};