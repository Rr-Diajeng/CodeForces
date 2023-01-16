#include <cstdio>
using namespace std;
int a[100005];

int main() {
  int t;
  scanf("%d", &t);

  for (int i = 0; i < t; i++){
    scanf("%d", &a[i]);
  }

  int count = 0;
  for (int i = 0; i < t-1; i++){
    if (a[i] != a[i+1]) count++;
  }

  printf("%d", count+1);

  return 0;
}
