#include <cstdio>
using namespace std;
typedef long long ll;

int main(){

    int t;
    scanf("%d",&t);

    ll x, y, n, a, b; 
    for(int i = 0; i < t; i++){
        scanf("%lld %lld %lld",&x,&y,&n);

        a = n / x;
        b = a * x + y;

        while(b >= n){
            a--;
            b = a * x + y;    
        }

        if (b + x <= n) printf("%lld\n", b + x);
        else printf("%lld\n", b);
    }
    return 0;
}

/** 
        12345 -> 12345/7 
        7x + 5 = k
        7 . 1764 + 5 = 12353
        7 . 1763 + 5 = 12346
        7 . 1762 + 5 = 12339

**/