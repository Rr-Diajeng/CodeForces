#include <cstdio>
using namespace std;

int main(){

    int n;
    scanf("%d", &n); 

    int a;
    if (n % 2 == 0){
        printf("%d\n", n/2);
        a = n/2;
        while(a--){
            printf("2 ");
        }
    }

    int b;
    if(n % 2 != 0 && n != 3){
        printf("%d\n", n/2);
        printf("3 ");
        b = (n - 3) / 2;

        while(b--){
            printf("2 ");
        }
    }

    if(n == 3){
        puts("1");
        puts("3");
    }

    return 0;
}