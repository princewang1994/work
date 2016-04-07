#include <iostream>
#include <vector>
/*
    LeetCode 338
    Given a non negative integer number num. For every numbers i in the range 0 ≤ i ≤ num calculate the number of 1's in their binary representation and return them as an array.

Example:
For num = 5 you should return [0,1,1,2,1,2].

Follow up:

It is very easy to come up with a solution with run time O(n*sizeof(integer)). But can you do it in linear time O(n) /possibly in a single pass?
Space complexity should be O(n).
Can you do it like a boss? Do it without using any builtin function like __builtin_popcount in c++ or in any other language.

    Hint：使用已经计算出来的数字，可以达到O（n）的时间复杂度

*/
using namespace std;


class Solution {
    public:
    vector<int> countBits(int num) {

          vector<int> res;

          res.push_back(0);

          for(int i=1;i<=num;i++)
          {
                int n=i/2;
                if(i%2==0)
                    res.push_back(res[n]);
                else
                    res.push_back(res[n]+1);
          }
          return res;
    }
};


int main()
{
    Solution s;
    vector<int> v=s.countBits(5);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
    return 0;
}
