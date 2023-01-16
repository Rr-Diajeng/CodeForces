#include <cstdio>
using namespace std;

int main(){

    int t;
    scanf("%d", &t);

    while(t--){
        int h, m, sum;
        scanf("%d %d", &h, &m); //00.00 itu ibaratnya 1440 menit

        h *= 60;
        sum = h + m;

        printf("%d\n", 1440 - sum);

    }
    return 0;
}