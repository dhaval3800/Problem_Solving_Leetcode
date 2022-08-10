class Solution {
public:
    
    bool IsPossible(vector<int>& weights,int n, int days, int mid){
        
        int daysCount = 1;
        int weightsSum = 0;
        
        for(int i=0; i<n; i++){
           
            if(weightsSum + weights[i]<= mid){
                weightsSum += weights[i];
            }
            else{
                daysCount++;
                if(daysCount > days || weights[i]>mid){
                    return false;
                }
                weightsSum = 0;
                weightsSum = weightsSum + weights[i];
            }
        }
        return true;   
    }
    
    
    int shipWithinDays(vector<int>& weights, int days) {
        int s =0;
        int sum = 0;
        int ans = -1;
        int n = weights.size();
        
        for(int i =0; i<n; i++){
            sum= sum + weights[i];
        }
            
        int e = sum;
        int mid = s + (e-s)/2;
        
        while(s<=e){
            
            if(IsPossible(weights,n,days,mid)){
                ans = mid;
                e = mid-1;
            }
            
            else{
                s = mid+1;
            }
            mid = s + (e-s)/2;
        }
        return ans;
    }
};