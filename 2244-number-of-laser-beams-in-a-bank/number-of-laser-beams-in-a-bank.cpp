class Solution {
public:
    int numberOfBeams(vector<string>& bank) {

        if(bank.empty()) return 0;

        int n=bank.size();
        int m=bank[0].size();

        if(n==1) return 0;

        int a=0;
        vector<int>arr;

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(bank[i][j]=='1'){
                    a++;
                }
            }
            if(a!=0){
                arr.push_back(a);
                a=0;
            }
        }
        int ans=0;

        if(arr.size()>=2){
            for(int i=0; i<arr.size()-1; i++){
                ans=ans+(arr[i]*arr[i+1]);
            }
        }
        return ans;

        
    }
};