#include <cstdio>
using namespace std;
int a[1005];
 
int main(){
 
    int n;
    scanf("%d", &n);
 
    for(int i = 1; i <= n; i++){
        scanf("%d", &a[i]);
    }
 
    int b = 1, c = n, d;
    int ans1 = 0, ans2 = 0, count = 0;
    while(b <= c){
        if(a[b] >= a[c]){
            d = a[b];
            count++;
            b++;
        }
        else if(a[b] <= a[c]){
            d = a[c];
            count++;
            c--;
        }
        if(count & 1) ans1 += d;
        else ans2 += d;
    }
    
    printf("%d %d\n", ans1, ans2);
   
    return 0;
}
