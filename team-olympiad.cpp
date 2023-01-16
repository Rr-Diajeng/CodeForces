#include <cstdio>
#include <algorithm>
using namespace std;
int a[6000], b[6000];

int main(){

    int t;
    scanf("%d",&t);

    int tmp;
    for(int i = 1; i <= t; i++){
        scanf("%d", &a[i]);

        tmp = a[i];
        b[tmp]++;
    }

    int mn = 6000;
    for(int i = 1; i <= 3; i++){
        mn = min(b[i], mn);
    }

    if(b[1] == 0 || b[2] == 0 || b[3] == 0) puts("0");

    else{
        printf("%d\n", mn);

        while(mn--){   
            for(int i = 1; i <= t; i++){
                if (a[i] == 1) {
                    printf("%d ", i);
                    a[i] = 0;
                    break;
                }   
            }

            for(int i = 1; i <= t; i++){
                if (a[i] == 2){
                    printf("%d ",i);
                    a[i] = 0;
                    break;
                }
            }

            for(int i = 1; i <= t; i++){
                if (a[i] == 3){
                    printf("%d\n", i);
                    a[i] = 0;
                    break;
                }
            }
            
        }
    }
    return 0;
}