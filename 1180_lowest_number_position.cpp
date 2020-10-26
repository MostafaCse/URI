#include<bits/stdc++.h>
using namespace std;

int main()
{
    int number,value,result,post;
    cin>>number;
    for(int i=1; i<=number; i++)
    {
        cin>>value;
        if(i==1)
        {
            result=value;
            post=1;
        }
        if(value<result)
        {
            result=value;
            post=i;
        }
    }

    cout<<"Menor valor: "<<result<<endl;
    cout<<"Posicao: "<<post-1<<endl;

return 0;
}
