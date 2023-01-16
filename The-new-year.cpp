#include <cstdio>
#include <algorithm>
using namespace std;
int a[5];

int main(){
       
    for(int i = 0; i < 3; i++){
        scanf("%d", &a[i]);
    }
    
    int mx = 0, mn = 100000, mm;
    for(int i = 0; i < 3; i++){
        mx = max(a[i], mx);
        mn = min(a[i], mn);

        if(a[i] != mx && a[i] != mn) mm = a[i];
    }

    printf("%d", (mx - mm) + (mm - mn));

    return 0;
}