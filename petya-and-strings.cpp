#include <cstdio>
#include <string.h>
using namespace std;
char a[105], b[105];

int main(){

    scanf("%s", a);
    scanf("%s", b);

    printf("%d\n", strcmp(strlwr(a), strlwr(b)));

    return 0;
}