class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {

        int n=nums.size();
        
        for(int i=0; i<n; i++){
            int temp=abs(nums[i]);
            nums[temp-1]=-abs(nums[temp-1]);

        }

        vector<int>ans;

        for(int i=0; i<n ;i++){
            if(nums[i]>0){
                ans.push_back(i+1);
            }
        }

        return ans;
        
    }
};