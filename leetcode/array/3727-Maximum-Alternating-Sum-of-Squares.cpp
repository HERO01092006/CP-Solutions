class Solution {
public:
    long long maxAlternatingSum(vector<int>& a) {
        int n=a.size();
        for(int i=0;i<n;i++)
        {
            a[i]*=a[i];
        }
        sort(a.begin(),a.end());
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            if(i<n/2)sum-=a[i];
            else sum+=a[i];
        }
        return sum;
    }
};