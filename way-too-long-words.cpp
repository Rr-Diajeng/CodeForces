#include <cstdio>
#include <string.h>
using namespace std;
char a[105];

int main(){

    int t;
    scanf("%d",&t);

    while(t--){
        scanf("%s", a);

        if(strlen(a) <= 10) printf("%s\n", a);
        else{
            int b = strlen(a);
            printf("%c%d%c\n", a[0], (b-2), a[b-1]);
        }
    }

    return 0;
}