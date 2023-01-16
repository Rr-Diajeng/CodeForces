#include <cstdio>
using namespace std;

int main(){

    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n); 

        if (n % 4 != 0) puts("NO");
        else {
            puts("YES");

            int sum = 0;
            for(int i = 2; i <= n; i += 2){
                printf("%d ", i);
                sum += i;
            }

            int count = 0, a = sum;
            for (int i = 1; i <= sum; i += 2){
                a = a - i;
                count++;

                if(count != n / 2){
                    printf("%d ", i);
                }

                else if(count == n/2) {
                    printf("%d\n", a + i);
                    break;
                }
            }
            
        }
    }
    return 0;
}