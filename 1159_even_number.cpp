#include<bits/stdc++.h>
using namespace std;

int main()
{
    int number;
    while(cin>>number && number!=0)
    {
        if(number%2!=0)
            number++;

    number+=(number+2)+(number+4)+(number+6)+(number+8);
    cout<<number<<endl;
    }

return 0;
}
