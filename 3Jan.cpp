//Problem: https://www.geeksforgeeks.org/problems/smallest-window-containing-0-1-and-2--170637/1

int smallestSubstring(string s) {
        vector<int>f(3,0);
        int l=0,r=0;
        bool ok=0;
        int ans=INT_MAX;
        while(r<s.size()or l<r){
            if(!ok and r<s.size()){
                ++f[s[r++]-'0'];
                if(f[0] and f[1] and f[2]){
                    ok=1;
                }
                else
                    ok=0;
            }
            else if(l<r){
                --f[s[l++]-'0'];
                if(f[0] and f[1] and f[2]){
                    ok=1;
                }
                else
                    ok=0;
            }
            if(ok){
                ans=min(ans,r-l);
            }
        }
        return ans==INT_MAX ? -1 : ans;
    }
