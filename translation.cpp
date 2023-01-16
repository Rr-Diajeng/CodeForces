#include <cstdio>
#include <string.h>
using namespace std;

int main(){
  char a[105], b[105];
  scanf("%s\n%s", a, b);

  if(strcmp(b , strrev(a)) == 0) puts("YES");
  else puts("NO");

  return 0;
}
