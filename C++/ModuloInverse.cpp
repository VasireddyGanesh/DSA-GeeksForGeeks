class Solution{
public:
	//Complete this function
	int modInverse(int a, int m)
	{
		//Your code here
		if(a==0) return -1;
		else if(a==1) return 1;
		else{
			for(int i=1;i<m;i++){
				if((a*i)%m==1){
					return i;
				}
			}
		}
		return -1;
	}
}; 
