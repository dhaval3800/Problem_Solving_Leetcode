int FindPivot(vector<int>& arr, int n){
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;
             
    while(s<e){
        if(arr[mid]>=arr[0])
            s = mid+1;
        
        else
            e = mid;
        mid = s+(e-s)/2;
    }
    return s;
}


int Binarysearch(vector<int>& nums,int s,int e,int target) {
        int start = s;
        int end = e;
        int mid = start+(e-start)/2;
        while(start<=end){
            if(nums[mid]==target) return mid;
            if(nums[mid]>target) end = mid-1;
            else start = mid+1;
            mid = start+(end-start)/2;
        }
        return -1;
}

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int pivot = FindPivot(nums,n);
        
        if(target>=nums[pivot] && target <= nums[n-1] ){
            return Binarysearch(nums,pivot,n-1,target);
        }
        
        else{
            return Binarysearch(nums,0,pivot-1,target);
        }
    }
};