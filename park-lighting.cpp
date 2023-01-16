#include <cstdio>
#include <cmath>
using namespace std;

int main(){

    int t;
    scanf("%d", &t);

    int n, m;
    while(t--){
        scanf("%d %d", &n, &m);

        int sum = 0;
        int a, b, sisan = 0, sisam = 0;

        if(n != 1){

            if(n & 1){
                a = ceil((double) n / 2);
                sisan = n - a;
            
                sum += a;
            }

            else {
                a = n / 2;
                sum += a;
            }

            if(m != 1){

                if(m & 1){
                    b = ceil((double) m / 2);
                    sisam = m - b;
            
                    sum += b;

                    if((sisam + sisan) % 2 == 0) sum += ((sisam + sisan) / 2);
                    else sum += (sisam + sisan);
                }

                else {
                    b = m / 2;
                    sum += b;
                }
            }

            printf("%d\n", sum);
        }
            
        else{

            if(m != 1){

                if(m & 1){
                    b = ceil((double) m / 2);
                    sum += b;
                }

                else {
                    b = m / 2;
                    sum += b;
                }
            }

            else sum = 1;

            printf("%d\n", sum);
        }

    }

    return 0;
}