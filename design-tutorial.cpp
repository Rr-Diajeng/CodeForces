#include <cstdio>
#include <algorithm>
using namespace std;

int main(){

    int t;
    scanf("%d",&t);

    if (t % 2 == 0){
        printf("8 %d", t - 8);
    }

    else {
        printf("9 %d", t - 9);
    }

    return 0;
}