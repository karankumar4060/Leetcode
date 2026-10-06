class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.size();
        int m=t.size();
        if(n!=m) return false;

        int a[26]={0};
        
        for(int i=0; i<n; i++){
            int temp=s[i]-'a';
            a[temp]++;

        }
        for(int i=0; i<m; i++){
            int temp=t[i]-'a';
            if(a[temp]==0) return false;
            else{
                a[temp]--;
            }

        }

        return true;
        
    }
};