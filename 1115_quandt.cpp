#include <bits/stdc++.h>
using namespace std;
int main(){
    int x;
    int y;
    while(true){
               cin >> x;
               cin >> y;
               if(x == 0 || y == 0) break;
               if(y > 0 && x > 0) cout << "primeiro"<<endl;
               if(y > 0 && x < 0) cout << "segundo"<<endl;
               if(y < 0 && x < 0) cout << "terceiro"<<endl;
               if(y < 0 && x > 0) cout << "quarto"<<endl;

    }

    return 0;
}
