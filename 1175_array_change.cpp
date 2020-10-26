#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n[20],in=0;;
    for(int i=0; i<20; i++)
        cin>>n[i];
    for(int i=19; i>=0; i--)
    {
        cout<<"N["<<in<<"] = "<<n[i]<<endl;
        in++;
    }
    return 0;
}
