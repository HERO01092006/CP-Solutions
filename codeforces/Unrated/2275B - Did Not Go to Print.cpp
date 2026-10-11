        /*   JAI HANUMAN    */




#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(NULL);

#define ll long long
#define pii pair<int,int>
#define pll pair<long long,long long>
#define vi vector<int>
#define vll vector<long long>
#define mci map<char,int>
#define mcl map<char,long long>
#define mil map<int,long long>
#define mll map<long long, long long>

#define REP(i,n) for(int i=0;i<(n);i++)
#define REPI(i,a,b) for(int i=(a);i<=(b);i++)
#define REV(i,n) for(int i=(n)-1;i>=0;i--)

#define all(x) (x).begin(), (x).end()

#define pb push_back
#define ff first
#define ss second




ll gcd(ll a,ll b) {
    while (b) {
        ll temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}


void test()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt=0;
    stack<int> a;
    vector<bool> d(n+1,false);

    for(int i=0;i<n;i++)
    {
        if(s[i]=='1')
        {
            cnt++;
            d[i+1]=true;
            a.push(i+1);
        }
        if(s[i]=='2')
        {
            if(cnt>0)
            {
                d[a.top()]=false;
                a.pop();
                cnt--;
                d[i+1]=true;
            }
            
        }
    }
    vector<int> b;

    for(int i=0;i<n+1;i++)
    {
        if(d[i]==true)
        {
            b.push_back(i);
        }
    }

    cout<<b.size()<<endl;
    for(int i=0;i<b.size();i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl; 
    

}


int main(){
    FAST_IO;
    //#ifdef LOCAL
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    //#endif

    int t=1;
    cin >> t;
    while(t--)
    {
        test();
    }
    return 0;
}

