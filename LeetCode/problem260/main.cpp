#include <iostream>
/**
Given an array of numbers nums, in which exactly two elements appear only once and all the other elements appear exactly twice. Find the two elements that appear only once.

For example:

Given nums = [1, 2, 1, 3, 2, 5], return [3, 5].

Note:
The order of the result is not important. So in the above example, [5, 3] is also correct.
Your algorithm should run in linear runtime complexity. Could you implement it using only constant space complexity?
**/
using namespace std;

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int aXorb = 0;
        for(auto item : nums)  aXorb ^= item;//aXorb最后的数值为两个single数的异或
        int lastBit = aXorb & (-aXorb);  //找到最后一个为1的位，也就是两个数最后一个不等的地方
        int a = 0, b = 0;
        for(auto item : nums) {
            if(item & lastBit)  a = a ^ item; //这一步将两个single数分开，保证两个single数不走同一个分支，而其他相同的double数一定走同一个分支～聪明阿
            else  b = b ^ item;
        }
        return vector<int>{a, b};
    }
};

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
