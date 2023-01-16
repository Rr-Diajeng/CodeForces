#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int t;
    scanf("%d", &t);

    while(t--){
        int n, x;
        scanf("%d %d", &n, &x);

        int count = 1;
        if(n < 3) puts("1");
        else {
            for(int i = 3; i <= 1000; i += x){
                if(n < i) break;
                else if(n == i){
                    count++; 
                    break;
                }
                else count++;
            }
            printf("%d\n", count);
        }
    }
    return 0;
}