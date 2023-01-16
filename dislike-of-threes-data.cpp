#include <cstdio>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);

    for(int i = 1; i <= t; i++){
        if ((i % 3 != 0) && (i % 10 != 3)) printf("%d, ",i);
    }

    return 0;
}