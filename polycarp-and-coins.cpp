#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int t;
    scanf("%d",&t);
    while(t--){

        int n;
        scanf("%d", &n);

        int x;
        x = round((double) n / 3);

        printf("%d %d\n", (n - (x * 2)), x);
        
    }
    return 0;
}