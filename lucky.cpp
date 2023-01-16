#include <iostream>
#include <string>
using namespace std;

int main(){

    int t;
    scanf("%d", &t);

    while(t--){
        string s;
        cin>> s;

        int hasil_1 = 0;
        int hasil_2 = 0;

        for(int i = 0; i < 3; i++){
            hasil_1 = hasil_1 + (s[i] - 48);
        }
        for(int i = 5; i >= 3; i--){
            hasil_2 = hasil_2 + (s[i] - 48);
        }
        if(hasil_1 == hasil_2) puts("YES");
        else puts("NO");
    }

    return 0;
}