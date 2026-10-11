class Solution {
public:
    long long minSumSquareDiff(vector<int>& a, vector<int>& b, int k1, int k2) {
        int n=a.size();
        vector<int> d;
        long long sum=0;
        int mx=0;
        for(int i=0;i<n;i++)
        {
            d.push_back(abs(a[i]-b[i]));
            sum+=abs(a[i]-b[i]);
            mx=max(mx,d[i]);
        }
        
        int k=k1+k2;
        if(k>=sum)return 0;
        vector<int> c(mx+1,0);
        for(int i=0;i<n;i++)
        {
            c[d[i]]++;
        }
        for(int i=mx;i>0 &&k>0;i--)
        {
            if(c[i]==0)continue;
            if(k>0)
            {
                int mn=min(k,c[i]);
                c[i]-=mn;
                c[i-1]+=mn;
                k-=mn;
            }
        }




        long long int ans=0;
        for(int i=0;i<=mx;i++)
        {
            ans+=1ll*c[i]*i*i;
        }
        
        return ans;
        
    }

};
