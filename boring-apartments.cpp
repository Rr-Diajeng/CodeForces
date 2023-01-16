#include <cstdio>
using namespace std;

int next (int a){
    int x = a % 10; 
    int digit = 0;
    while(a != 0){
        a /= 10;
        digit++;
    } 

    x *= 10;
    if(digit == 1) x -= 9;
    else if (digit == 2) x -= 7;
    else if(digit == 3) x -= 4;
    else if(digit == 4) x -= 0;

    return x;
}

int main(){

    int t;
    scanf("%d", &t);

    int a, b;
    while(t--){
        scanf("%d", &a);

        printf("%d\n", next(a));
    }
    return 0;
}