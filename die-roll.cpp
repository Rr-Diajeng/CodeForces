#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int y, w;
    cin>> y>> w;

    int k, atas, bawah;
    if(y >= w){
        k = 6 - y;
        atas = (k + 1) / __gcd((k + 1), 6);
        bawah = 6 / __gcd((k + 1), 6);
    }
    else{
        k = 6 - w;
        atas = (k + 1) / __gcd((k + 1), 6);
        bawah = 6 / __gcd((k + 1), 6);
    }

    printf("%d/%d", atas, bawah);

    return 0;
}