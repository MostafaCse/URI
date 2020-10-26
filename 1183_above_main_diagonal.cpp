#include<bits/stdc++.h>
using namespace std;

int main(){
    double N[12][12];
    char p;
    double sum = 0.0;

    cin >> p;

    for(int i = 0; i < 12; i++){
            for(int j = 0; j < 12; j++){
                   cin >> N[i][j];
                   if(j > i){
                        sum += N[i][j];
                   }
            }
   }
    cout<<fixed<<setprecision(1);
    if(p == 'S')
         cout<<sum<<endl;
    else
         cout<<sum/66.0<<endl;
    return 0;
}
