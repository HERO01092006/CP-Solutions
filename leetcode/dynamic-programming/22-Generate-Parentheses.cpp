class Solution {
public:

    bool isValid(string s) {
        int n=s.size();

        stack<char> a;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
            {
                a.push(s[i]);
            }
            if(s[i]=='{')
            {
                a.push(s[i]);
            }
            if(s[i]=='[')
            {
                a.push(s[i]);
            }
            if(s[i]==')')
            {
                if(a.empty())return false;
                if(a.top()=='(')
                {
                    a.pop();
                }
                else
                {
                    return false;
                }
            }
            if(s[i]==']')
            {
                if(a.empty())return false;
                if(a.top()=='[')
                {
                    a.pop();
                }
                else
                {
                    return false;
                }
            }
            if(s[i]=='}')
            {
                if(a.empty())return false;
                if(a.top()=='{')
                {
                    a.pop();
                }
                else
                {
                    return false;
                }
            }
        }
        if(a.empty())
        return true;
        else
        return false;
    }
    vector<string> generateParenthesis(int n) {
        int m=1<<((2*n));
        m-=1;
        cout<<m<<endl;
        vector<string> s;

        for(int i=0;i<=m;i++)
        {
            string a;
            int c=0;
            int o=0;
            int t=i;
            for(int j=0;j<2*n;j++)
            {
                if(t&1)a+='(';
                else a+=')';
                t>>=1;
            }
            bool ans=isValid(a);
            if(ans)
            s.push_back(a);


        }

        return s;
    }
};