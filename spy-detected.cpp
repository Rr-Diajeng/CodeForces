#include <cstdio>
using namespace std;
int ar[105];

int main(){

    int t;
    scanf("%d", &t);

    while(t--){
        int a;
        scanf("%d", &a);

        for(int i = 1; i <= a; i++){
            scanf("%d", &ar[i]);
        }

        int b, c, d;
        for(int i = 1; i <= a - 1; i++){
            if (ar[i] != ar[i+1]) {
                b = ar[i]; // 1
                d = i; //1
                continue;
            }
        }

        if(b == ar[d-1]) printf("%d\n", d + 1);
        else if (b != ar[d-1]) printf("%d\n", d);

    }

    return 0;
}