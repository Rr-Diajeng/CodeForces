#include <cstdio>
using namespace std;
typedef long long ll;
int main(){

    int t;
    scanf("%d", &t);

    while(t--){
        ll n;
        scanf("%lld", &n);
        
        ll count = 0, start;
        for(int i = 1; i <= 9; i++){
            start = i;

            while(start <= n){
                count++;
                start = start * 10 + i;
            }
        }
        printf("%lld\n", count);
    }
    return 0;
}