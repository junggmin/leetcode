class Solution {
public:
 
    long dp[31][1001];
    int dfs(int n, int k, int target){
        if(target==0 && n==0) return 1;
        if(target==0|| n<0) return 0;
        if(dp[n][target]!=-1) return dp[n][target];
        
        long long cnt=0;
        for(int i=1;i<=k;i++){
            if(target-i<0) break;
            cnt+=dfs(n-1,k,target-i);
        }
        
        cnt=cnt% 1000000007;
        
        
        return dp[n][target]=cnt;
    }
    int numRollsToTarget(int n, int k, int target) {
        memset(dp,-1,sizeof(dp));
        return dfs(n,k,target);
    }

    
};
