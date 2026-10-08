class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        
        int n=nums.size();
        double avg=0;
        int sum=0;
        for(int i=0; i<k; i++){
            sum=sum+nums[i];
        }
        avg=(double)sum/k;
        int maxsum=sum;

        if(n==k) return avg;
        else{
            for(int i=k; i<n; i++){
                sum = sum - nums[i-k] + nums[i];
                maxsum=max(maxsum, sum);
                
            }
            avg=(double)maxsum/k;

        }

        return avg;

              
    }
};