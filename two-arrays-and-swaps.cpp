#include <iostream>
#include <algorithm>
using namespace std;
int a[35], b[35];

int main(){

    int t;
    cin>> t;

    while(t--){
        int n, k;
        scanf("%d %d", &n, &k);

        for(int i = 0; i < n; i++){
            scanf("%d", &a[i]);
        }

        for(int i = 0; i < n; i++){
            scanf("%d", &b[i]);
        }

        sort(a, a + n);
        sort(b, b + n, greater<int>());

        int count = 1;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(a[i] < b[j]){
                    if(count > k) break;
                    else{
                        swap(a[i], b[j]);
                        count++;
                        b[j] = 0;
                        continue;
                    }
                }
            }
        }

        long long sum = 0;
        for(int i = 0; i < n; i++){
            sum += a[i];
        }
        printf("%lld\n", sum);
    }
    return 0;
}

/**
 * @brief fungsi greater<int>() adalah 
 * mengurutkan kebalik. decreasing value.
 * 
 */