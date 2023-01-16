#include <cstdio>
#include <string>
#include <algorithm>
#include <iostream>
using namespace std;
typedef long long ll;

int main(){

    string s;
    cin>> s;

    ll count = 0;
    char start = 'a';

    for(int i = 0; i < s.length(); i++){
        
        ll a = abs(s[i] - start);
        ll b = 26 - a;

        count += min(a, b);
        start = s[i];
    }
    
    printf("%lld\n", count);

    return 0;
}