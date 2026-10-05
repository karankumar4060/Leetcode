class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int n=nums.size();

        int arr_sum=0;
        int ac_sum=0;
        for(int i=1; i<=n;i++){
            ac_sum=ac_sum^i;
        }

        for(int i=0; i<n; i++){
            ac_sum=ac_sum^nums[i];
        }

        

        // if(arr_sum==ac_sum) return 0;       
        
        return ac_sum;
    }
};