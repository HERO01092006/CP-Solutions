class Solution {
public:
    int maxSum(vector<int>& a, int k) {
        int n=a.size();
        vector<int> b(32,0);
        for(int i=0;i<n;i++)
        {
            int t=a[i];
            int j=0;
            while(t>0)
            {
                b[j]+=t&1;
                t>>=1;
                j++;
            }
        }
        vector<int> c(k,0);
        int ans=0;
        const long long mod=1e9+7;
        for(int i=0;i<k;i++)
        {
            for(int j=31;j>=0;j--)
            {
                if(b[j]==0)c[i]<<=1;
                else
                {
                    b[j]--;
                    c[i]|=1;
                    c[i]<<=1;
                    
                }
            }
            c[i]>>=1;
            cout<<c[i]<<endl;
            ans=(ans+1ll*c[i]*c[i]%mod)%mod;

        }
        return ans;
    }
};