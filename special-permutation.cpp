#include <iostream>
using namespace std;

int main(){

    int t;
    cin>> t;

    while(t--){
        int x;
        cin>> x;

        if(x & 1){
            for(int i = 2; i < x; i += 2){
                printf("%d ", i);
            }
            printf("%d ", x);
            for(int i = 1; i < x; i += 2){
                printf("%d ", i);
            }
            puts("");
        }
        else {
            for(int i = 2; i < x; i += 2){
                printf("%d ", i);
            }
            printf("%d ", x);
            for(int i = 1; i < x; i += 2){
                printf("%d ", i);
            }
            puts("");
        }
    }

}