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
    int x,y,r;
    cin>>x>>y>>r;

    for(int i=x-r;i<=x+r;i++)
    {
        for(int j=y-r;j<=y+r;j++)
        {
            if(((x-i)*(x-i))+((y-j)*(y-j))==(r*r))
            {
                cout<<i<<" "<<j<<endl;
                return ;
            }
        }
    }

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

