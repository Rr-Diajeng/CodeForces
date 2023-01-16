#include <iostream>
using namespace std;
typedef long long ll;

int main(){

    int t;
    cin>> t;

    ll n, m;
    while(t--){

        cin>> n>> m;

        if(n == 1) puts("0");
        else if(n == 2) cout<< m<< endl;
        else cout<< m * 2<< endl;
 
    }
    return 0;
}