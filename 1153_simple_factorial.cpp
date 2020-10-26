#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,result=1;
    cin>>n;
    for(int i=n; i>1; i--)
        result*=i;
    cout<<result<<endl;

    return 0;
}
