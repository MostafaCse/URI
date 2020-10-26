#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin>>a;
int in=0;
    for(int i=a;; i++)
    {
        if(i%2!=0)
        {
            cout<<i<<endl;
            in++;
        }
        if(in==6)
            break;
    }

    return 0;
}
