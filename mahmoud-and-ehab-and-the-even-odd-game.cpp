#include <cstdio>
using namespace std;

int main(){

    int n;
    scanf("%d", &n);

    /** krn start dr mahmoud, maka dia pasti pilih bil genap.
     * ehab pasti pilih ganjil
    */

   if(n % 2 == 0) puts("Mahmoud");
   else puts("Ehab");


    return 0;
}