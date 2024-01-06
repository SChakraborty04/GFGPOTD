//Problem: https://www.geeksforgeeks.org/problems/techfest-and-the-queue1044/1

int sum=0;
    void primeFactors(int n) 
    { 
        while (n % 2 == 0) 
        { 
            sum++; 
            n = n/2; 
        } 
    
        for (int i = 3; i <= sqrt(n); i = i + 2) 
        { 
            
            while (n % i == 0) 
            { 
                sum++; n = n/i; } } if (n > 2) 
            sum++; 
    }
	int sumOfPowers(int a, int b){
	    for(int i=a;i<=b;i++)
	    primeFactors(i);
	    return sum;
	}
