#include <iostream>
#include <string>
using namespace std;

int main(){

    int t;
    cin >> t;
    string a;

    int sum = 0;
    while(t--){
        cin >> a;

        if(a == "Tetrahedron") sum += 4;
        else if (a == "Cube") sum += 6;
        else if (a == "Octahedron") sum += 8;
        else if (a == "Dodecahedron") sum += 12;
        else if (a == "Icosahedron") sum += 20;
    }

    printf("%d\n", sum);
    
    return 0;
}