#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long mul=1;
        for(int i=0;i<nums.size();i++)
            mul*=nums[i];
        vector<int> res;
        for(int i=0;i<nums.size();i++)
        {
            if(num[i]!=0)
                res.push_back(mul/nums[i]);
        }
        return res;
    }
};
int main()
{
    int arr[]={1,2,3,4};
    vector<int> v(arr,arr+4);
    Solution s;
    vector<int> res=s.productExceptSelf(v);

    for(int i=0;i<4;i++)
        cout<<res[i]<<endl;
    return 0;
}
