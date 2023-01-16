#include <cstdio>
#include <ctype.h>
using namespace std;
char a[1005];

int main(){
  scanf("%s", a);

  putchar (toupper(a[0]));

  int i = 1;
  while(a[i]){
    printf("%c", a[i]);
    i += 1;
  }

  return 0;
}
