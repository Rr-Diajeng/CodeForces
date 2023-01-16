#include <string>
#include <iostream>
using namespace std;

int main(){

    string a, b, c;
    cin >> a >> b >> c;

    int count = 0;
    for (int i = 0; i < c.size(); i++){
        for(int j = 0; j < a.size(); j++){
            if(a[j] == c[i]) {
                a[j] = 2;
                c[i] = 1;
                count++;
                continue;
            }
        }
    }

    int count2 = 0;
    for (int i = 0; i < c.size(); i++){
        for(int j = 0; j < b.size(); j++){
            if(b[j] == c[i]) {
                b[j] = 3;
                c[i] = 1;
                count2++;
                continue;
            }
        }
    }
    
    bool status = true;
    for (int i = 0; i < c.size(); i++){
        if(c[i] != 1) {
            status = false;
        }
    }

    if (status == true && count == a.size() && count2 == b.size()) puts("YES");
    else puts("NO");

    return 0;
}