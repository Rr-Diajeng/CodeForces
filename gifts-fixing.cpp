#include <cstdio>
#include <algorithm>
using namespace std;
typedef long long ll;
int a[55], b[55];

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int x;
        scanf("%d",&x);

        int mn = 1000000000;
        for(int i = 0; i < x; i++){
            scanf("%lld", &a[i]);
            mn = min(a[i], mn);
        }

        int mnn = 1000000000;
        for(int i = 0; i < x; i++){
            scanf("%lld",&b[i]);
            mnn = min(b[i], mnn);
        }

        ll g, h, count, hasil = 0;
        for(int i = 0; i < x; i++){
            if (a[i] != mn && b[i] != mnn){
                g = a[i] - mn;
                h = b[i] - mnn;

                if(g < h) {
                    count = g;
                    a[i] -= g;
                    b[i] -= g;
                }
                else if (g > h) {
                    count = h;
                    a[i] -= h;
                    b[i] -= h;
                }
                else if (g == h){
                    count = g;
                    a[i] -= g;
                    b[i] -= h;
                }
                hasil += count;
            }
        }
        
        ll c, d = 0, e, f = 0;
        for(int i = 0; i < x; i++){
            if (a[i] != mn){
                c = a[i] - mn;
                d += c;
            }
            if (b[i] != mnn){
                e = b[i] - mnn;
                f += e;
            }
        }

        printf("%lld\n", hasil + d + f);
    }
    return 0;
}