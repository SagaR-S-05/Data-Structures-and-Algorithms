#include<iostream>
using namespace std;
int main()
{
    int n;
    int count=1;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            cout<<count<<"\t";
            j++;count++;

        }
        cout<<"\n";
        i++;
    }
}