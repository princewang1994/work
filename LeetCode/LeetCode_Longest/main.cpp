#include <iostream>

using namespace std;

class LongestSubstring {
public:
    int equal(string str1,string str2, int l1, int l2, int n)
    {
        for(int i=0;i<n;i++)
        {
            if(str1[l1+i]!=str2[l2+i])
                return 0;
        }
        return 1;
    }
    int findLongest(string A, int n, string B, int m) {

        int ** dp;

        dp=new int *[n+1];

        for(int i=0;i<=n;i++)
        {
            dp[i]=new int[m+1];
        }

        ///
        for(int j=0;j<=m;j++)
                dp[0][j]=0;

        ///
        for(int i=0;i<=n;i++)
                dp[i][0]=0;


        int longest=-1;

        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(A[i-1]==B[j-1])
                    dp[i][j]=dp[i-1][j-1]+1;
                else dp[i][j]=0;

                if(dp[i][j]>longest)
                    longest=dp[i][j];
            }
        }

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cout<<dp[i][j]<<" ";
            }
            cout<<endl;
        }


        for(int i=0;i<n;i++)
        {
            delete dp[i];
        }
        delete dp;

        return longest;


    }
};

int main()
{
    string A="1AB2345CD";
    string B="12345EF";
    LongestSubstring l;
    cout<<l.findLongest(A,A.length(),B,B.length())<<endl;
    return 0;
}
