#include <cstdio>
#include <algorithm>
using namespace std;
int a[105];

int main(){

    int t;
    scanf("%d", &t);

    int mx = 0;
    for(int i = 0; i < t; i++){
        scanf("%d", &a[i]);
        mx = max(mx, a[i]);
    }

    int sum = 0, b;
    for(int i = 0; i < t; i++){
        if (a[i] != mx){
            b = mx - a[i];
            sum += b;
        }
        else continue;
    }

    printf("%d", sum);
    
    return 0;
}