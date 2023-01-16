#include <string>
#include <iostream>
using namespace std;

int main(){

    int t;
    cin>> t;

    while(t--){

        string s;
        cin>> s;

        int ok = 1;
        if(s.length() % 2 != 0) puts("NO");
        else{
            for(int i = 0; i < (s.length() / 2); i++){
                if(s[i] != s[i + (s.length() / 2)]){
                    ok = 0;
                    break;
                }
            }
            if(ok == 0) puts("NO"); 
            else puts("YES");
        }
    }
    
    return 0;
}