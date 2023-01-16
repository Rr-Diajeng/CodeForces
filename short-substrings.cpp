#include <iostream>
#include <string>
using namespace std;

int main(){

    int t;
    cin >> t;

    string a;
    while(t--){
        cin >> a;

        printf("%c%c", a[0], a[1]);
        for(int i = 3; i < a.size(); i += 2){
            printf("%c", a[i]);
        }
        puts("");
    }
    return 0;
}