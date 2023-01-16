#include <iostream>
using namespace std;

int main(){

    int t;
    cin>> t;

    while(t--){
        int a, b, c, d;
        cin>> a>> b;

        if(a > b){
            if((a - b) & 1) puts("2")
            else puts("1");
        }
        else if(a < b){
            if((b - a) & 1) puts("1");
            else puts("2");
        }
        else if(a == b) puts("0");
    }
    return 0;
}