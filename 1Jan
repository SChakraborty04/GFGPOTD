//Problem: https://www.geeksforgeeks.org/problems/array-pair-sum-divisibility-problem3257

bool canPair(vector<int> arr, int k) {
        map<int,int>f;
        int n=arr.size();
        for(int i=0;i<n;i++){
            int current=arr[i]%k;
            int need=(k-current)%k;
            if(f.count(need)){
                --f[need];
                if(f[need]==0){
                    f.erase(need);
                }
            }
            else{
                ++f[current];
            }
        }
        if(f.size()==0){
            return true;
        }
        return false;
    }
