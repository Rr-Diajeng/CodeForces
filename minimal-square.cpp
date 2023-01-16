#include <cstdio>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);

    int a, b;
    while(t--){
        scanf("%d %d", &a, &b);

        if(a >= b){
            b *= 2;

            if (b > a) printf("%d\n", b*b);
            else printf("%d\n", a*a);
        }

        else{
            a *= 2;

            if(a > b) printf("%d\n", a*a);
            else printf("%d\n", b*b);
        }
    }
    return 0;
}