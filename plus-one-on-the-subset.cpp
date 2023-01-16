#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int t;
    scanf("%d",&t);

    while(t--){
        int n;
        scanf("%d",&n);

        int a;
        int mx = 0, mn = 1000000005;
        while(n--){
            scanf("%d", &a);
            
            mx = max(a, mx);
            mn = min(a, mn);
        }
        cout<< mx - mn<<endl;
    }

    return 0;
}