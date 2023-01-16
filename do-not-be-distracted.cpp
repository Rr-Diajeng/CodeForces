#include <iostream>
using namespace std;

int main(){

    int t;
    cin>> t;

    while(t--){

        int u;
        cin>> u;

        string a;
        cin>> a;

        for(int i = 0; i < u; i++){
            if(a[i] == 0) continue;
            else {
                for(int j = i + 1; j < u; j++){
                    if (a[i] == a[j]) a[j] = 0;
                    else if (a[i] != a[j]) break;
                }
            }
        }

        bool status = true;
        for(int i = 0; i < u; i++){
            if(a[i] == 0) continue;
            else{
                for(int j = i + 1; j < u; j++){
                    if(a[i] == a[j]){
                        status = false;
                        break;
                    }
                }
            }
        }

        if(status == false) puts("NO");
        else puts("YES");

    }

    return 0;
}