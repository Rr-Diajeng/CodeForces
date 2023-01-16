#include <cstdio>
using namespace std;

int main(){

    int t;
    scanf("%d",&t);

    int a, b;
    int m = 0, c = 0, draw = 0;
    while(t--){
        scanf("%d %d", &a, &b);
        if (a > b) m++;
        else if (a < b) c++;
    }

    if (m > c && m > draw) puts("Mishka");
    else if (c > m && c > draw) puts("Chris");
    else if (m == c) puts("Friendship is magic!^^");

    return 0;
}