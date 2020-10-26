#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    double a,b,c;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a>>b>>c;
        cout<<fixed<<setprecision(1);
        cout<<(a*2+b*3+c*5)/(2+3+5)<<endl;
    }

    return 0;
}
