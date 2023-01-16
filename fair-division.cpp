#include <cstdio>
#include <cmath>
using namespace std;

int main(){

    int t;
    scanf("%d", &t);

    int n;
    while(t--){
        scanf("%d", &n);

        int a;
        int count1 = 0, count2 = 0, sum = 0;
        for(int i = 0; i < n; i++){
            scanf("%d", &a);
            sum += a;

            if(a == 1) count1 += a;
            else if(a == 2) count2 += a;
        }
        
        int bagi, x, y;
        if(n & 1){ //6
            if(sum & 1) puts("NO");
            else{
                bagi = sum / 2; //4
                if((bagi & 1) && count1 == 0) puts("NO");
                else{
                    x = abs(count2 - bagi); //2
                    y = bagi - x; //2

                    if(count1 >= y) puts("YES");
                    else puts("NO");
                }
            }
        }
        
        else{
            if (sum & 1) puts("NO");
            else puts("YES");
        }
    }
    return 0;
}

/**
 * @brief 5
2 1 1 1 1 = 6

2 = 2
1 = 4

6 / 2 = 3

3 / 2 = 1

3 - 1 = 2
1 -> 3
2 -> 0

total 1 = 3
berhasil.



5
2 2 2 1 1

2 = 6
1 = 2

8 / 2 = 4

3
2 2 2

6 / 2 = 3
count2 = 6
count1 = 0

3
2 1 2
total = 5
2 = 4
1 = 1

 * 
 */