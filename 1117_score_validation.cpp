#include<bits/stdc++.h>
using namespace std;

int main()
{
    int in=0;
    double n,sum=0;
    while(true)
    {
        cin>>n;
        if(n>=0 && n<=10)
        {
            sum+=n;
            in++;
        }
        else if(n<0 || n>10)
            cout<<"nota invalida"<<endl;
       if(in==2)
       {
           cout<<fixed<<setprecision(2);
           cout<<"media = "<<sum/2<<endl;
           break;
       }
    }
    return 0;
}
