#include <iostream>
#include <string>
using namespace std;

int main(){

    string a;
    getline(cin, a);

    int k = a.length();
    for(int i = 0; i < k; i++){
        if(a[i] == '0') continue;
        if(a[i] == '.' && a[i+1] == '-'){ 
            printf("0");
            continue;
        }
        if(a[i] == '.' && a[i+1] == '.'){
            printf("0");
            continue;
        }
        else if(a[i] == '-' && a[i+1] == '.'){
            printf("1");
            a[i+1] = 0;
        }
        else if (a[i] == '-' && a[i+1] == '-'){
            printf("2");
            a[i+1] = 0;
        }
        if((i == k-1) && a[i] == '.'){
            printf("0");
        }
    }

    return 0;
}