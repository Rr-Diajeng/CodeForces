#include <iostream>
using namespace std;

int main(){

    int n, m;
    cin>> n>> m;

    int white = 0, grey = 0, black = 0;
    char a;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin>> a;
            if(a == 'W') white++; 
            else if(a == 'G') grey++;
            else if(a == 'B') black++;
            else continue;
        }
    }

    if((white + grey + black) == (n * m)) puts("#Black&White");
    else puts("#Color");

    return 0;
}