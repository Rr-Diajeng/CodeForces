#include <string>
#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    string a;
    cin >> a;

    for(int i = 0; i < n; i++){
        a[i] = toupper(a[i]);
    }

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if (a[i] == a[j]) a[j] = 1;
        }
    }

    int count = 0;
    for(int i = 0; i < n; i++){
        if (a[i] >= 65 && a[i] <= 90) count++;
    }
    if (count == 26) puts("YES");
    else puts("NO");

    return 0;
}