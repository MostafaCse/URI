#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    float S=0,j=1.0;
    for (i = 1;i <= 100;i++){
        S = S + (1/j);
        j++;
    }
    cout<<fixed<<setprecision(2);
    cout<<S<<endl;
    return 0;
}
