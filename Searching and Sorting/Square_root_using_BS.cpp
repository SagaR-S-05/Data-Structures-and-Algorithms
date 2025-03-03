#include<bits/stdc++.h>
using namespace std;

long long int sq_rt(int n)
{
    int low = 0, high = n;
    long long int ans=-1;
    while(low<=high)
    {
        long long int mid = low + (high-low)/2;
        if(mid*mid == n)
        {
            return mid;
        }
        else if (mid*mid > n)
        {
            high=mid-1;
        }
        else
        {
            ans=mid;
            low=mid+1;

        }
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;
    cout<<sq_rt(n);
}