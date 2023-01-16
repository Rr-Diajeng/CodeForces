#include <cstdio>
using namespace std;
int a[100005];

int main() {
  int k, l, m, n, d;
  scanf("%d\n%d\n%d\n%d\n%d", &k, &l, &m, &n, &d);

  if (k == 1||l == 1||m == 1||n == 1) printf("%d", d);
  else {
    int x = k;
    while (k <= d){
      a[k]++;
      k += x;
    }

    int y = l;
    while (l <= d){
      a[l]++;
      l += y;
    }

    int z = m;
    while (m <= d){
      a[m]++;
      m += z;
    }

    int p = n;
    while (n <= d){
      a[n]++;
      n += p;
    }

    int count = 0;
    for (int i = 1; i <= d; i++){
      if (a[i] == 0) count++;
    }

    printf("%d", d - count);

  }

  return 0;
}
