#include <cstdio>
#include <cmath>
using namespace std;

int main(){

    int x;
    scanf("%d",&x);

    int sum = 0, count = 0, un;
    int akar = sqrt(x);

    for(int i = 1; i <= akar; i++){
        un = (0.5 * i * i) + (0.5 * i);
        sum += un;
        count++;
        if(sum > x){
            count -= 1;
            break;
        }
        else if(sum == x){
            break;
        }
    }
    printf("%d\n", count);
    return 0;
}