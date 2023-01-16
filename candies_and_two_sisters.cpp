#include <cstdio>
using namespace std;
int a[10005];

int main() {
  int t;
  scanf("%d", &t);

  for(int i = 0; i < t; i++){
    scanf("%d", &a[i]);
  }

  for(int i = 0; i < t; i++){
    if (a[i] <= 2) puts("0");

    else if ((a[i] > 2) && (a[i] % 2 != 0)){
      printf("%d\n", a[i] / 2);
    }

    else if ((a[i] > 2) && (a[i] % 2 == 0)){
      printf("%d\n", (a[i] / 2) - 1);
    }
  }

  return 0;
}