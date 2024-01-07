//Problem: https://www.geeksforgeeks.org/problems/split-array-largest-sum--141634/1
//Used a lamda function called check.

int splitArray(int arr[] ,int N, int K) {
        int high=0,low=0;
        for(int i=0;i<N;i++)
            high+=arr[i],low=max(low,arr[i]-1);
        while(low<high-1){
            int mid=high+(low-high)/2;
            auto check=[&]()->bool{
                int cuts=0,sum=0;
                for(int i=0;i<N;i++){
                    if(sum+arr[i]>mid){
                        cuts++;sum=arr[i];
                    }
                    else
                        sum+=arr[i];
                }
                return cuts<K;
            };
            if(check())
            high=mid;
            else
            low=mid;
        }
        return high;
    }
