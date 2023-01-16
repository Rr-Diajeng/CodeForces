#include <cstdio>
#include <algorithm>
using namespace std;
int a[1005];

int main(){

    int t;
    scanf("%d", &t);

    while(t--){
        int x;
        scanf("%d", &x);

        for(int i = 0; i < x; i++){
            scanf("%d", &a[i]);
        }

        int mn = 1005, b;
        for(int i = 0; i < x - 1; i++){
            for(int j = i + 1; j < x; j++){
                b = abs(a[i] - a[j]);
                mn = min(b, mn);
            }
        }
        printf("%d\n", mn);
    }
    return 0;
}