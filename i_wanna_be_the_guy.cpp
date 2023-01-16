#include <cstdio>
using namespace std;
int a[105], b[105], c[105];

int main() {
  int x;
  scanf("%d", &x);

  int p;
  scanf("%d", &p);
    for (int i = 1; i <= p; i++){
      scanf("%d", &a[i]);
    }

  int q;
  scanf("%d", &q);
    for (int i = 1; i <= q; i++){
      scanf("%d", &b[i]);
    }

  for(int i = 1; i <= x; i++){
    for(int j = 1; j <= x; j++){
      if (a[i] == j) c[j]++;
      if (b[i] == j) c[j]++;
    }
  }

  int count = 0;
    for(int i = 1; i <= x; i++){
      if (c[i] == 0) {
        count++;
      }
    }

  if (count != 0) puts("Oh, my keyboard!");
  else puts("I become the guy.");

  return 0;
}
