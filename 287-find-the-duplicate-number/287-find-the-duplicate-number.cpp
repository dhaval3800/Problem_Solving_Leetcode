class Solution {
public:
    int findDuplicate(vector<int>& nums) {
    
        
    // simple iteration
        
    //     sort(nums.begin(),nums.end());
    //     for(int i = 0; i < nums.size() - 1; i++)
    //     {
    //         if(nums[i] == nums[i+1])
    //             return nums[i];
    //     }  
    //     return 0;
    // }
        
    // using map
        
        map<int, int> m;
        for(int i = 0; i<nums.size(); i++){
            m[nums[i]]+=1;
        }
        
        for(auto i : m ){
            if(i.second >1){
                return i.first;
            }
        }
        return 0;
    }
};