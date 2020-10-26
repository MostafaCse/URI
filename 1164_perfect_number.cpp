#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, sum = 0, x, y;
  cin>>n;
    while(n--){
       cin>>x;
        for(int i = 1; i<x; i++){

            if(x%i == 0){
                sum += i;
            }
        }
        if(sum == x)
            cout<<x<<" eh perfeito"<<endl;
        else
            cout<<x<<" nao eh perfeito"<<endl;
        sum = 0;
    }
}
