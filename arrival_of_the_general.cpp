#include <cstdio>
#include <algorithm>
using namespace std;
int a[105], b[105], c[105];

int main() {

  int t;
    scanf("%d", &t);

  for(int i = 1; i <= t; i++){
    scanf("%d", &a[i]);
  }

  int mx = 0, mn = 100;
    for(int i = 1; i <= t; i++){
      if (a[i] >= mx) mx = a[i];
      if (a[i] <= mn) mn = a[i];
    }

  for(int i = 1; i <= t; i++){
    if (mx == a[i]) b[i]++;
    if (mn == a[i]) c[i]++;
  }

  int p = 100, q = 0;
  // p for max and q for min;
  for(int i = 1; i <= t; i++){
    if (b[i] != 0){
      if (i <= p) p = i;
    }

    if (c[i] != 0){
      if (i >= q) q = i;
    }
  }

  if (p > q) {
    p = abs(p - 1);
    q = abs(q - t);
    printf("%d", (p+q) - 1);
  }

  else{
    p = abs(p - 1);
    q = abs(q - t);
    printf("%d", p + q);
  }

  return 0;
}
