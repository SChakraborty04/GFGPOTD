//Problem: https://www.geeksforgeeks.org/problems/longest-subarray-with-sum-divisible-by-k1259/1

int longSubarrWthSumDivByK(int arr[], int n, int k)
	{
	    int sum=0;
	    unordered_map<int,int>s;
	    s[0]=n;
	    int ans=0;
	    for(int i=n-1;i>-1;i--){
	        sum=(sum+(arr[i]%k)+k)%k;
	        if(!s.count(sum))
	        s[sum]=i;
	        else
	        ans=max(ans,s[sum]-i);
	    }
	    return ans;
	}
