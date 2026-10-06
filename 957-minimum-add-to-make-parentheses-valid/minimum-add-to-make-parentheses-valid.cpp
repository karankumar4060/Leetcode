class Solution {
public:
    int minAddToMakeValid(string s) {
        int n=s.length();
        // int a=0;
        // int b=0;

        // for(int i=0; i<n; i++){
        //     if(s[i]=='(') a++;
        //     else{
        //         if(a!=0) a--;
        //         else b++;
        //     }
        // }

        // return a+b;

        stack<int> aa;
        for(int i=0; i<n; i++){
            if(s[i]=='('){
                aa.push(s[i]);
            }else{
                if(!aa.empty() && aa.top()=='(' && s[i]==')') aa.pop();
                else aa.push(s[i]);
            }
        }
        return aa.size();
    }
};