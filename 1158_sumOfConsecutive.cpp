#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, sum = 0, x, y;
    scanf("%d",&n);
    while(n--){
        scanf("%d %d",&x,&y);
        if(x%2 == 0)
            x++;
        for(int i = 1; i<=y; i++){
            sum += x; //printf("%d sum\n",sum);
            x += 2;
        }
        printf("%d\n",sum);
        sum = 0;
    }
}
