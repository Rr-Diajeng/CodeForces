#include <iostream>
using namespace std;
int a[44];


int main(){
    
    int t;
    cin>> t;

    while(t--){
        int u;
        cin>> u;

        for(int i = 0; i < u; i++){
            cin>> a[i];
        }

        int good = 0, odd = 0, even = 0;
        for(int i = 0; i < u; i++){
            if(i % 2 == 0){
                if(a[i] % 2 == 0) good++;
                else odd++;
            }
            else {
                if (a[i] % 2 == 1) good++;
                else even++;
            }
        }

        if (good == u) puts("0");
        else if (odd == even) cout<< odd<< endl;
        else puts("-1");
    }

    return 0;
}