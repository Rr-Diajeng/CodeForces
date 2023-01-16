#include <cstdio>
#include <string.h>
using namespace std;

int main(){

    char a[7] = {"I hate"};
    char b[7] = {"I love"};

    int t;
    scanf("%d",&t);

    if (t == 1) printf("%s it", a);
    else{
        for(int i = 1; i < t; i++){
            if(i & 1) printf("%s that ", a);
            else printf("%s that ", b);
        }
        if(t & 1) printf("%s it ", a);
        else printf("%s it ", b);
    }
    return 0;
}