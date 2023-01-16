#include <cstdio>
#include <string.h>
using namespace std;
char a[100005];

int main(){

    int b, c, d, e;
    scanf("%d %d %d %d", &b, &c, &d, &e);

    scanf("%s", a);
    int sum = 0;
    for(int i = 0; i < strlen(a); i++){
        if (a[i] == '1') sum += b;
        else if (a[i] == '2') sum += c;
        else if (a[i] == '3') sum += d;
        else if (a[i] == '4') sum += e;
    }

    printf("%d\n", sum);

    return 0;
}