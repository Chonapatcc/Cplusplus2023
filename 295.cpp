#include <bits/stdc++.h>
using namespace std;

string func(string a, string b)
{
    int len1 = a.size();
    int len2= b.size();

    vector<int> result(len1+len2,0);

    int id1=0;
    int id2=0;

    for(int i =len1-1 ; i>=0 ; i--)
    {
        id2=0;
        int n1= a[i] - '0';
        int carry =0;
        for(int y=len2-1 ; y>=0 ; y--)
        {
            int n2= b[y]-'0';
            int n = n1*n2 +carry +result[id1+id2];

            carry = n/10;
            result[id1+id2]=n%10;

            id2++;
        }
        if(carry>0)
        {
            result[id1+id2]= carry;
        }
        id1++;
    }

    int i = result.size();

    while(i>=0 and result[i]==0)
    {
        i--;
    }

    string t="";
    while(i>=0 )
    {
        t+=to_string(result[i--]);
    }

    return t;
}

int main()
{
    long long int a;
    long long int b;
    cin>>a>>b;
    a=log10l(a);
    long long int mod = 1000000007 ;

    string t1= to_string(a);
    string t2= to_string(b);

    //cout << t1 << endl <<t2 <<endl;


    string dif = func(t1,t2);
    

    cout << dif;
}