#include<iostream>
using namespace std;

int main()
{
    int i,j,n;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            char ch=i+j+'A'-2;
            cout<<ch;
        }
        cout<<endl;
    }
}