class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        // map<int, int>m;

        int n=nums.size();
        vector<int> ans;
        // for(int i=0;i<n; i++){
        //     m[nums[i]]=i;
        // }

        // for(int i=1; i<=n; i++){
        //     if(!m.count(i)){
        //         ans.push_back(i);
        //     }
        // }

        for(int i=0; i<n; i++){
            int a=abs(nums[i])-1;
            if(nums[a]>0){
                nums[a]=-abs(nums[a]);
            }
            
        }

        for(int i=0; i<n; i++){
            if(nums[i]>0){
                ans.push_back(i+1);
            }
        }
        return ans;
        
    }
};