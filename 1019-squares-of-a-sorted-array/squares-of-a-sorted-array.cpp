class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n);

        // int a=0;
        // for(int i=0;i<n ;i++){
        //     if(nums[i]>0){
        //         a=i;
        //         break;
        //     }
        // }

        int i=0;
        int j=n-1;
        

        for(int i=0; i<n; i++){
            nums[i]=nums[i]*nums[i];
        }
        sort(nums.begin(), nums.end());


        return nums;

        
    }
};