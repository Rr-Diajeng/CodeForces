#include <cstdio>
#include <algorithm>
using namespace std;
int a[5];

int main(){

    int n, k, l, c, d, p, nl, np;
    scanf("%d %d %d %d %d %d %d %d", &n, &k, &l, &c, &d, &p, &nl, &np);

    a[0] = (k * l) / nl;
    a[1] = c * d;
    a[2] = p / np;

    int mn = 1005;
    for(int i = 0; i < 3; i++){
        mn = min((a[i] / n), mn);
    }

    printf("%d\n", mn);
    return 0;
}