class Solution{
public:
    long long lcm(long long a,long long b){
        return (a*b)/gcf(a,b);
    }
    long long gcf(long long a,long long b){
        if(b==0) return a;
        else{
            return gcf(b,a%b);
        }
    }
    long long getSmallestDivNum(long long n){
        // code here
        long long ans=1;
        for(int i=1;i<=n;i++){
            ans=lcm(i,ans);
        }
        return ans;
    }
};

