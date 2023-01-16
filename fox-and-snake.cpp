#include <string>
#include <iostream>
using namespace std;

int main(){

    int b, k;
    cin >> b >> k;

    for(int i = 1; i <= b; i++){
        if(i & 1){
            for(int j = 1; j <= k; j++) printf("#");
            puts("");
        }
        else if(i % 4 == 0){
            printf("#");
            for(int j = 2; j <= k; j++) printf(".");
            puts("");
        }
        else{
            for(int j = 1; j < k; j++) printf(".");
            printf("#");
            puts("");
        }
    }
    return 0;
}