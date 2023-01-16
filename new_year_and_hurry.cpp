#include <cstdio>
using namespace std;
int a[55];

int main() {
  int x, y;
  scanf("%d %d", &x, &y);

  for(int i = 1; i <= x; i++){
    a[i] = 5 * i;
  }


  int b = 0, i = 1, count = 0;
  while (a[i] != 0){
    b += a[i];
    i++;

    if (b <= (240 - y)) count++;
    else break;
  }

  printf("%d", count);

  return 0;
}
