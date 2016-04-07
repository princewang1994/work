#include <iostream>

using namespace std;

int main()
{
    int n;
    int rec[2000];

    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>rec[i];
    }

    int max=0;

    for(int i=0;i<n;i++)
    {
        int left=i;
        int right=i;
        while( left-1>=0 && rec[left-1]>=rec[i] ) left--;
        while( right+1<n && rec[right+1]>=rec[i] ) right++;
        //cout<<left<<' '<<right<<endl;
        int area=(right-left+1)*rec[i];
        if (area>max)
        {
            max=area;
        }

    }
    cout<<max<<endl;
    return 0;
}
