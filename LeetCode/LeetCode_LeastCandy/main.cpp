#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int candy(vector<int> &ratings) {


        int m=99999;
        int index=0;

        for(int i=0;i<ratings.size();i++)
        {
                if(ratings[i]<m)
                {
                    m=ratings[i];
                    index=i;
                }
        }

        int m_candy=1;
        int candy=1;

        for(int i=index+1;i<ratings.size();i++)
        {
            if(ratings[i]>ratings[i-1])
            {
                m_candy+=(candy+=1);
                continue;
            }
            else
            {
                m_candy+=(candy=1);
                continue;
            }

        }

        candy=1;
        for(int i=index-1;i>=0;i--)
        {
            if(ratings[i]>ratings[i+1])
            {
                m_candy+=(candy+=1);
                continue;
            }
            else
            {
                m_candy+=(candy=1);
                continue;
            }
            m_candy+=candy;
        }
        return m_candy;
    }
};

int main()
{
    int r[]={1,3,3,0,5,1,2,2,4};
    vector<int> v;
    for(int i=0;i<9;i++)
    {
        v.push_back(r[i]);
    }
    Solution s;
    cout<<s.candy(v)<<endl;
    return 0;
}
