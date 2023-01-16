#include <cstdio>
#include <string.h>
using namespace std;
char a[105], b[105];
int c[105];

int main() {
  scanf("%s\n%s", a, b);

  int p, q;
  int x = strlen(a);
  for (int i = 0; i < x; i++) {
    p = a[i];
    q = b[i];
    if (p != q) c[i] = 1;
    else c[i] = 0;
  }

  for (int i = 0; i < x; i++){
    printf("%d", c[i]);
  }

  return 0;
}
