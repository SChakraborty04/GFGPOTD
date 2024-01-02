//Problem: https://www.geeksforgeeks.org/problems/largest-sum-subarray-of-size-at-least-k3121/1

 long long int maxSumWithK(long long int a[], long long int n, long long int k) 
    {
        vector<long long>dp(n+1,0);
        for(int i=n-1;i>-1;i--){
            dp[i]=max(0LL,(a[i]+dp[i+1]));
        }
        long long ans=INT_MIN;
        long long cur_sum=0;
        for(int i=0;i<k;i++){
            cur_sum+=a[i];
        }
        for(int i=k;i<n;i++){
            long long sum=cur_sum+dp[i];
            ans=max(sum,ans);
            cur_sum+=a[i];
            cur_sum-=a[i-k];
        }
        return max(cur_sum,ans);
    }
