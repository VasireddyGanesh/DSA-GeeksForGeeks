 
 class Solution{
 public:
	 int isPrime(int x){
		 for(int i=2;i<=sqrt(x);i++){
			 if(x%i==0) return false;
		 }
		 return true;
	 }
	 int exactly3Divisors(int N)
	 {
		 int count=0;
		 for(int i=2;i*i<=N;i++){
			 if(isPrime(i)&& i*i<=N){
				 count++;
			 }
		 }
		 return count;
	 }
 };
