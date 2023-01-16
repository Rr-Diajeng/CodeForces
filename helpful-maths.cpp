#include <cstdio>
#include <string.h>
using namespace std;
char a[105];

int main(){

    scanf("%s", a);

    if (strlen(a) == 1) printf("%s", a);
    else{
        char b;
        for(int i = 0; i <= (strlen(a) - 2); i += 2){
            for(int j = i + 2; j <= strlen(a); j += 2){
                if(a[i] >= a[j]){
                    b = a[i];
                    a[i] = a[j];
                    a[j] = b;
                }
            }
        }
        printf("%s", a);
    }
    return 0;
}