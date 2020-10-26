#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test_case,number;
    cin>>test_case;
    for(int i=0; i<test_case; i++)
    {
        bool is_prime=1;
        cin>>number;
        for(int j=2; j<number; j++)
        {
            if(number%j==0)
            {
                is_prime=0;
                break;
            }
        }
        if(is_prime==1)
            cout<<number<<" eh primo"<<endl;
        else
             cout<<number<<" nao eh primo"<<endl;
    }
    return 0;
}
