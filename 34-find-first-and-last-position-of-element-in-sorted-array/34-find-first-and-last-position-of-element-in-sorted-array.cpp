      
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res;
    int start=0;
    int first=-1;
    int end=nums.size()-1;
    
    
    while(start<=end){
    int mid=start+(end-start)/2;    
    
        if(nums[mid]==target){
            first=mid;
            end=mid-1;
        }
        
        else if(nums[mid]>target)
            end=mid-1;
        
        else start=mid+1;
    
    }
    res.push_back(first);
        
    int last =-1;
    start=0;
    end=nums.size()-1;
    
    // now the last occurence
     while(start<=end){
    int mid=start+(end-start)/2;    
    
        if(nums[mid]==target){
            last=mid;
            start=mid+1;
        }
    else if(nums[mid]>target)end=mid-1;
        else start=mid+1;
    
    }res.push_back(last);
    return res;

    }
};