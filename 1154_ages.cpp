#include<bits/stdc++.h>
using namespace std;

int main()
{
    int age,number=0;
    double sum=0;
    while(cin>>age && age>0)
           {
               sum+=age;
               number++;
           }
           cout<<fixed<<setprecision(2);
           cout<<sum/number<<endl;

return 0;
}
