class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int high=0;
        int higidx=0;
        int low=0;
        
        for(int i=0; i<n; i++){
            if(high<nums[i]){
                high=nums[i];
                higidx=i;
            }
        }

        for(int i=0; i<n; i++){
            if(i!=higidx){
                low=max(low, nums[i]);
            }
        }

        return (high-1)*(low-1);      
        

       
        // if(nums[0]<nums[1]){
        //     high=nums[1];
        //     low=nums[0];
        // }else{
        //     high=nums[0];
        //     low=nums[1];   
        // }

        // if(n==2){
        //    return (high-1)*(low-1);
        

        // }else{
        //     for(int i=0; i<n; i++){
        //         if(nums[i]>=high){
        //             low=high;
        //             high=nums[i];
        //         }
        //     }
        // }

    }
};