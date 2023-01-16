#include <cstdio>
using namespace std;

int main() {
  int x, y;
  scanf("%d %d", &x, &y);

  int fashion, sisa;
  if (x < y) {
    fashion = x;
    sisa = y - fashion;

    printf("%d %d", fashion, (sisa / 2));
  }
  else if (x > y) {
    fashion = y;
    sisa = x - fashion;

    printf("%d %d", fashion, (sisa / 2));
  }
  else {
    fashion = x;

    printf("%d 0", fashion);
  }

  return 0;
}
