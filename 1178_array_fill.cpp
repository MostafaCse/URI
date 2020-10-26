#include<bits/stdc++.h>
using namespace std;

int main()
{
    double number;
    cin>>number;
    cout<<fixed<<setprecision(4);
    for(int i=0; i<100; i++)
    {
        cout<<"N["<<i<<"] = "<<number<<endl;
        number/=2;
    }
    return 0;
}
