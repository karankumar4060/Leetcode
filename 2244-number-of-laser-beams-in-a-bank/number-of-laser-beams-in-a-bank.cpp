class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        if (bank.empty()) return 0;
        int n = bank.size();
        int m = bank[0].size();
        int a = 0;
        int ans = 0;
        vector<int> arr;
        if (n == 1) return 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (bank[i][j] == '1') {
                    a++;
                }
            }
            if (a != 0) {
                arr.push_back(a);
                a = 0;
            }
        }
        for (int i = 0; i < (int)arr.size() - 1; i++) {
            ans += arr[i] * arr[i + 1];
        }
        return ans;
    }
};
