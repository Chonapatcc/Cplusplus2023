#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin>>a;
    int n1=0,n2=0;

    for(int i =0 ; i< a.length();i++)
    {
        if(a[i]==')')
        {
            n1++;
        }
        else
        {
            n2++;
        }
        

    }
    if(n1==n2)
    {
        cout <<"YES";
    }
    else
    {
        cout << "NO";
    }
}