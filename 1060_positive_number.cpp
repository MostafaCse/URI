#include<bits/stdc++.h>
using namespace std;

int main()
{
    int pos=0;
    double number;
    for(int i=0; i<6; i++)
    {
        cin>>number;
        if(number>0)
            pos++;
    }
    cout<<pos<<" valores positivos"<<endl;

    return 0;
}
