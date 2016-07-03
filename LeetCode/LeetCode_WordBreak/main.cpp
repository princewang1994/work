#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    int isP(string s,int a,int b)
    {
            int m=(b-a)/2;
            for(int i=0;i<=m;i++)
            {
                if(s[a+i]!=s[b-i])
                    return 0;
            }
            return 1;
    }
    int minCut(string s) {

        int ** dp;

        dp=new int*[s.length()];

        for(int i=0;i<s.length();i++)
        {
            dp[i]=new int[s.length()];
            for(int j=0;j<s.length();j++)
            {
                dp[i][j]=0;
            }
        }

        for(int i=0;i<s.length();i++)
        {
            dp[i][i]=1;
        }

        for(int m=1;m<s.length();m++)
        {
            for(int j=0;j+m<s.length();j++)
            {
                if(isP(s,j,j+m))
                {
                    dp[j][j+m]=1;
                    continue;
                }
                int _min=99999;
                for(int k=0;j+k<j+m;k++)
                {
                    _min=min(_min,dp[j][j+k]+dp[j+k+1][j+m]);
                }
                dp[j][j+m]=_min;
            }
        }

        for(int i=0;i<s.length();i++)
        {
            for(int j=0;j<s.length();j++)
            {
                cout<<dp[i][j]<<" ";
            }
            cout<<endl;
        }

        int ans=dp[0][s.length()-1]-1;


        for(int i=0;i<s.length();i++)
        {
            delete dp[i];

        }

        delete dp;


        return ans;

    }
};
int main()
{
    Solution s;

    string str="abccbbaab";
    s.minCut(str);
    //cout<<s.isP(str,5,8);
    return 0;
}
