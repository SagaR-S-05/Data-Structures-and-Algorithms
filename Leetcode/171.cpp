#include<bits/stdc++.h>
using namespace std;
int titleToNumber(string columnTitle) 
{
    int result=0;
    for(auto x : columnTitle)
    {
        result = result * 26 + (x-'A'+1);
    }
    return result;

}

int main()
{
    string columnTitle;
    cin>>columnTitle;
    cout<<titleToNumber(columnTitle);
}