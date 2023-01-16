#include <iostream>
#include <cmath>
using namespace std;

int main(){
    
    int t;
    scanf("%d",&t);

    int input;
    double bagi;
    while(t--){
        scanf("%d",&input);
        bagi = (double) input / 2;
        printf("%d\n", (int) ceil(bagi));
    }

    return 0;
}