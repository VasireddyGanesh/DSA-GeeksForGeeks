class Solution{
public:
	int digitsInFactorial(int N)
	{
		// code here
		if(N<=1) return 1;
		double count=N*log10(N/M_E)+(log10(2*M_PI*N)/2);
		return floor(count)+1;
	}
}; 
