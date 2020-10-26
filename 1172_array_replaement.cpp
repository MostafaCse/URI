#include<bits/stdc++.h>
using namespace std;

int main()
{
    int number;
    for(int i=0; i<10; i++)
    {
        cin>>number;
        if(number<=0)
            cout<<"X["<<i<<"] = "<<1<<endl;
        else
             cout<<"X["<<i<<"] = "<<number<<endl;
    }
    return 0;
}
