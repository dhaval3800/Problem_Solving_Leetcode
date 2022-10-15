class Solution {
public:
    int removeElement(vector<int>& nums, int val){
        int cnt =0;
        for(int i =0; i<nums.size(); i++){
            if(nums[i]==val){
                nums.erase(nums.begin()+i);
                i--;
                
            }
            else
                cnt++;
        }
        for(int j =0; j<nums.size(); j++){
            cout<< nums[j]<<" ";
            
        } 
        cout <<endl;
        return cnt;
    }
};