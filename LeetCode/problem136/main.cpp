#include <iostream>
#include <vector>
/*
Given an array of integers, every element appears twice except for one. Find that single one.

Note:
Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?

    重要提示：把所有的数异或起来即可，因为异或具有交换律，如a^b^c^b^a=a^a^b^b^c
    这样可以把为偶数的对子抵消，剩下奇数
*/

using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {

        for(int i=1;i<nums.size();i++)
        {
            nums[0]^=nums[i];
        }
        return nums[0];
    }
};

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
