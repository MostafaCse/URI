#include<bits/stdc++.h>
using namespace std;

int main()
{
    double n;
    cout<<fixed<<setprecision(1);
    for(int i=0; i<100; i++)
    {
        cin>>n;
        if(n<=10)
            cout<<"A["<<i<<"] = "<<n<<endl;
    }

    return 0;
}
