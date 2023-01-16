#include <cstdio>
using namespace std;
int p[105], q[105];

int main(){
  int t;
  scanf("%d", &t);

  int count = 0;
  for (int i = 0; i < t; i++){
    scanf("%d %d", &p[i], &q[i]);

    if (p[i] <= q[i] && (q[i] - p[i] >= 2)) count++;
  }

  printf("%d", count);

  return 0;
}
