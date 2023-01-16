#include <iostream>
using namespace std;
typedef long long ll;
 
int main(){
 
    int testcase;
    cin>> testcase;
    ll w, h, n;
    while(testcase--){
        
        cin>> w>> h>> n;
 
        ll sum = 1;
        if(w % 2 == 0){
            while(1){
                if(w % 2 > 0) {
                    break;
                }
                else{
                    w /= 2;
                    sum *= 2;
                }
            }
        }
        if(h % 2 == 0){
            while(1){
                if(h % 2 > 0) break;
                else{
                    h /= 2;
                    sum *= 2;
                }
            }
        }
        
        if(sum >= n || n == 1) puts("YES");
        else puts("NO");
        
    }
    return 0;
}