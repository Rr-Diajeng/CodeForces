#include <cstdio>
using namespace std;
int a[10005];

int main(){

    int n, k;
    scanf("%d %d", &n, &k);

    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    int count = 0;
    if(k == 1){
        for(int i = 0; i < n; i++){
            if (a[i] < 5) count++;
        }
        printf("%d", count / 3);
    }

    else if(k == 2){
        for(int i = 0; i < n; i++){
            if (a[i] < 4) count++;
        }
        printf("%d", count / 3);
    }

    else if(k == 3){
        for(int i = 0; i < n; i++){
            if (a[i] < 3) count++;
        }
        printf("%d", count / 3);
    }

    else if(k == 4){
        for(int i = 0; i < n; i++){
            if (a[i] < 2) count++;
        }
        printf("%d", count / 3);
    }

    else if(k == 5){
        for(int i = 0; i < n; i++){
            if (a[i] < 1) count++;
        }
        printf("%d", count / 3);
    }

    return 0;
}