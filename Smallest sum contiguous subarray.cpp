#include<iostream>
#include<limits.h>

using namespace std;
int main()
{
    int a[] = {3, -4, 2, -3, -1, 7, -5};
    //int a[] = {2, 6, 8, 1, 4};
    int n = sizeof(a)/sizeof(a[0]);
    int ans = INT_MAX;
    int val = INT_MAX;
    for (int  i = 0 ; i < n ; i++)
    {
        if (val > 0)
            val = a[i];
        else
            val = val + a[i];
        ans = min(ans , val);
        cout<<ans<<" ";
    }
    cout<<endl<<ans;
    return 0;
}