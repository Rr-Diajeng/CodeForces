#include <cstdio>
using namespace std;

int main() {
  int t;
  scanf("%d", &t);

  int a, mx = 0, mn = 10005, count = -1;
  while(t--){
    scanf("%d", &a);

    if (a > mx || a < mn) count++;
    if (a > mx) mx = a;
    if (a < mn) mn = a;
  }

  printf("%d", count);

  return 0;
}
