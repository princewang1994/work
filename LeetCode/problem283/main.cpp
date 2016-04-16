#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0;

        while(nums[i]!=0 && i<nums.size())
            i++;
        if(nums[i]!=0)
            return;

        int j=i;
        while(1)
        {
           //int j=i;
            while(nums[j]==0 && j<nums.size())j++;
            if(j<nums.size())
            {
                int tmp=nums[j];
                nums[j]=nums[i];
                nums[i++]=tmp;
                if(i==nums.size())return;
                while(nums[i]!=0 && i<nums.size())i++;
            }
            else
            {return;}
        }
    }
};
int main()
{
    int a[]={1,3,0,0,12};
    Solution s;
    vector<int> v;
    for(int i=0;i<10;i++)
        v.push_back(a[i]);
    s.moveZeroes(v);
    for(int i=0;i<10;i++)
        cout<<v[i]<<" ";
    cout<<endl;
    return 0;
}
